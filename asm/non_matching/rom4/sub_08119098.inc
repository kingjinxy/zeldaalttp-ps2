	THUMB_FUNC_START sub_08119098
sub_08119098: @ 0x08119098
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _081190C4  @ =gRam
	ldr r2, _081190C8  @ =0x00001770
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	beq _081190DE
	ldr r2, _081190CC  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _081190BC
	cmp r0, #43
	beq _081190BC
	cmp r0, #10
	bne _081190D0
_081190BC:
	add r0, r4, #0
	bl sub_081183E4
	b _081190DE
_081190C4:
	.4byte gRam
_081190C8:
	.4byte 0x00001770
_081190CC:
	.4byte 0x000009AD
_081190D0:
	cmp r0, #2
	bne _081190DE
	ldr r2, _081190EC  @ =0x00000E33
	add r0, r1, r2
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
_081190DE:
	add r0, r4, #0
	bl sub_08118844
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081190EC:
	.4byte 0x00000E33
	THUMB_FUNC_END sub_08119098

