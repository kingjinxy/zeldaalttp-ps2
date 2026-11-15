	THUMB_FUNC_START sub_0813288C
sub_0813288C: @ 0x0813288C
	push {r4-r7,lr}
	ldr r2, _081328A0  @ =gRam
	ldr r0, _081328A4  @ =0x00000B66
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _081328A8
	sub r0, r0, #1
	strb r0, [r1]
	b _081328F6
_081328A0:
	.4byte gRam
_081328A4:
	.4byte 0x00000B66
_081328A8:
	mov r4, #0
	mov r6, #31
	ldr r7, _081328FC  @ =0x00000978
	add r5, r2, r7
	ldr r0, _08132900  @ =0x0000FFE0
	mov r12, r0
_081328B4:
	add r1, r4, #0
	add r1, r1, #130
	asr r1, r1, #1
	lsl r1, r1, #1
	ldr r0, _08132904  @ =gUnknown_02000800
	add r0, r1, r0
	ldrh r2, [r0]
	add r0, r6, #0
	and r0, r0, r2
	strh r0, [r5]
	ldr r0, _08132908  @ =gUnknown_02000C00
	add r1, r1, r0
	ldrh r3, [r1]
	add r2, r6, #0
	and r2, r2, r3
	mov r7, #0
	ldrsh r0, [r5, r7]
	cmp r2, r0
	beq _081328E0
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_081328E0:
	mov r0, r12
	and r0, r0, r3
	orr r2, r2, r0
	strh r2, [r1]
	add r0, r4, #2
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #14
	bne _081328B4
	bl sub_08132840
_081328F6:
	pop {r4-r7}
	pop {r0}
	bx r0
_081328FC:
	.4byte 0x00000978
_08132900:
	.4byte 0x0000FFE0
_08132904:
	.4byte gUnknown_02000800
_08132908:
	.4byte gUnknown_02000C00
	THUMB_FUNC_END sub_0813288C

