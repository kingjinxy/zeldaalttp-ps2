	THUMB_FUNC_START sub_08106680
sub_08106680: @ 0x08106680
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r4, _081066EC  @ =gRam
	ldr r0, _081066F0  @ =0x00000E75
	add r1, r4, r0
	add r1, r3, r1
	ldrb r2, [r1]
	mov r0, #251
	and r0, r0, r2
	mov r2, #0
	strb r0, [r1]
	ldr r1, _081066F4  @ =0x00001002
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	ldr r7, _081066F8  @ =0x00000FC2
	add r0, r4, r7
	add r2, r3, r0
	ldrb r5, [r2]
	cmp r5, #0
	bne _081066D4
	sub r1, r1, #176
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
	mov r0, #32
	strb r0, [r2]
	ldr r7, _081066FC  @ =0x00001122
	add r1, r4, r7
	add r1, r3, r1
	add r7, r7, #48
	add r0, r4, r7
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08106700  @ =0x000010C2
	add r0, r4, r1
	add r0, r3, r0
	strb r5, [r0]
_081066D4:
	ldrb r0, [r2]
	cmp r0, #14
	bhi _0810670E
	ldr r7, _08106704  @ =0x00000FF2
	add r0, r4, r7
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #205
	beq _08106708
	bl sub_0813288C
	b _08106734
_081066EC:
	.4byte gRam
_081066F0:
	.4byte 0x00000E75
_081066F4:
	.4byte 0x00001002
_081066F8:
	.4byte 0x00000FC2
_081066FC:
	.4byte 0x00001122
_08106700:
	.4byte 0x000010C2
_08106704:
	.4byte 0x00000FF2
_08106708:
	bl sub_081329C0
	b _08106734
_0810670E:
	sub r0, r0, #63
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #14
	bhi _08106734
	ldr r1, _0810672C  @ =0x00000FF2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #205
	beq _08106730
	bl sub_081327E0
	b _08106734
	.byte 0x00
	.byte 0x00
_0810672C:
	.4byte 0x00000FF2
_08106730:
	bl sub_0813290C
_08106734:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08106680

	.byte 0x00
	.byte 0x00
