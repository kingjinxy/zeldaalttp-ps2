	THUMB_FUNC_START sub_081026B4
sub_081026B4: @ 0x081026B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r6, r0, #0
	ldr r4, _08102704  @ =gRam
	ldr r1, _08102708  @ =0x00001142
	add r0, r4, r1
	add r7, r6, r0
	ldrb r5, [r7]
	add r0, r6, #0
	bl sub_080C2C4C
	ldr r0, _0810270C  @ =0x00001152
	add r4, r4, r0
	add r2, r6, r4
	ldrb r1, [r2]
	add r0, r1, #0
	add r0, r0, #64
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	bne _081026E4
	sub r0, r1, #3
	strb r0, [r2]
_081026E4:
	ldrb r1, [r7]
	eor r5, r5, r1
	and r5, r5, r3
	cmp r5, #0
	beq _081026FC
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081026FC
	add r0, r6, #0
	bl sub_08102B88
_081026FC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102704:
	.4byte gRam
_08102708:
	.4byte 0x00001142
_0810270C:
	.4byte 0x00001152
	THUMB_FUNC_END sub_081026B4

