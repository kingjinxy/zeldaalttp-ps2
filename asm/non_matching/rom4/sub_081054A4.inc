	THUMB_FUNC_START sub_081054A4
sub_081054A4: @ 0x081054A4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080C99DC
	ldr r3, _081054F4  @ =gRam
	ldr r0, _081054F8  @ =0x00001152
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	mov r5, #0
	strb r0, [r1]
	ldr r1, _081054FC  @ =0x00001142
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081054E6
	strb r5, [r2]
	ldr r1, _08105500  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	strb r5, [r0]
	add r1, r1, #112
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
_081054E6:
	add r0, r6, #0
	bl sub_080CA2A4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081054F4:
	.4byte gRam
_081054F8:
	.4byte 0x00001152
_081054FC:
	.4byte 0x00001142
_08105500:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081054A4

