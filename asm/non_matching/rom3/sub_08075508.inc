	THUMB_FUNC_START sub_08075508
sub_08075508: @ 0x08075508
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	bl sub_08133594
	ldr r4, _080755E8  @ =gRam
	ldr r1, _080755EC  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080755DC
	mov r3, #216
	mov r7, #150
	lsl r7, r7, #4
	add r2, r4, r7
	mov r0, #2
	strh r0, [r2]
	ldr r0, _080755F0  @ =0x00000964
	add r1, r4, r0
	mov r0, #3
	strh r0, [r1]
	mov r8, r4
	mov r12, r8
	add r6, r2, #0
	mov r1, #8
	mov r9, r1
	ldr r5, _080755F4  @ =gUnknown_020017B0
	ldr r4, _080755F8  @ =gUnknown_020017A0
_08075546:
	lsl r2, r3, #1
	ldrh r0, [r4]
	strh r0, [r5]
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r7, _080755FC  @ =gUnknown_02001604
	add r1, r2, r7
	strh r0, [r1]
	add r7, r7, #4
	add r1, r2, r7
	strh r0, [r1]
	ldr r1, _08075600  @ =gUnknown_0200160C
	add r2, r2, r1
	strh r0, [r2]
	sub r4, r4, #16
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08075574
	mov r2, r9
	strh r2, [r6]
_08075574:
	sub r5, r5, #16
	sub r3, r3, #8
	ldr r1, _080755F0  @ =0x00000964
	add r1, r1, r12
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807558C
	mov r7, r9
	strh r7, [r1]
_0807558C:
	cmp r3, #0
	bne _08075546
	ldr r0, _08075604  @ =gUnknown_02001780
	ldr r1, _08075608  @ =gUnknown_02001790
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	ldr r1, _080755F8  @ =gUnknown_020017A0
	ldrh r1, [r1]
	orr r0, r0, r1
	ldr r1, _080755F4  @ =gUnknown_020017B0
	ldrh r1, [r1]
	orr r0, r0, r1
	ldr r1, _0807560C  @ =0x00000952
	add r1, r1, r8
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r2, #0
	ldrsh r1, [r1, r2]
	cmp r0, r1
	bne _080755DC
	ldr r0, _08075610  @ =0x000009E8
	add r0, r0, r8
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	bl sub_08130AB4
	bl sub_0806BDA4
	bl sub_0812A130
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080755DC
	ldr r1, _08075614  @ =0x00000A3C
	add r1, r1, r8
	ldr r0, _08075618  @ =0x0000FFF3
	strh r0, [r1]
_080755DC:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080755E8:
	.4byte gRam
_080755EC:
	.4byte 0x00000996
_080755F0:
	.4byte 0x00000964
_080755F4:
	.4byte gUnknown_020017B0
_080755F8:
	.4byte gUnknown_020017A0
_080755FC:
	.4byte gUnknown_02001604
_08075600:
	.4byte gUnknown_0200160C
_08075604:
	.4byte gUnknown_02001780
_08075608:
	.4byte gUnknown_02001790
_0807560C:
	.4byte 0x00000952
_08075610:
	.4byte 0x000009E8
_08075614:
	.4byte 0x00000A3C
_08075618:
	.4byte 0x0000FFF3
	THUMB_FUNC_END sub_08075508

