	THUMB_FUNC_START sub_08038238
sub_08038238: @ 0x08038238
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _08038338  @ =gUnknown_03006C80
	ldr r1, _08038338  @ =gUnknown_03006C80
	ldr r2, _08038338  @ =gUnknown_03006C80
	ldr r3, _08038338  @ =gUnknown_03006C80
	add r4, r3, #0
	add r3, r3, #95
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strb r5, [r3]
	add r3, r2, #0
	add r2, r2, #94
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #93
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #92
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038338  @ =gUnknown_03006C80
	ldr r1, _08038338  @ =gUnknown_03006C80
	add r2, r1, #0
	add r1, r1, #130
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1]
	add r1, r0, #0
	add r0, r0, #128
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038338  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #110
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038338  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #109
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038338  @ =gUnknown_03006C80
	mov r1, #0
	str r1, [r0, #28]
	ldr r0, _08038338  @ =gUnknown_03006C80
	ldrh r1, [r0, #38]
	ldr r2, _0803833C  @ =0x0000FFFF
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #38]
	ldr r0, _08038340  @ =gUnknown_03000F44
	ldr r1, _08038344  @ =gUnknown_03000208
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1]
	mov r1, #0
	str r1, [r0]
	ldr r0, _08038348  @ =gUnknown_03000200
	mov r1, #0
	str r1, [r0]
	bl sub_0800BED8
	bl sub_080137DC
	bl sub_0800BEC4
	bl sub_0802D954
	bl sub_0800D6F4
	bl sub_0800D744
	mov r0, #0
	str r0, [r7]
	ldr r1, _0803834C  @ =gBG0Buffer
	ldr r2, _08038350  @ =0x01000400
	add r0, r7, #0
	bl CpuFastSet
	bl sub_0801424C
	bl sub_080138BC
	bl sub_0803E518
	ldr r1, _08038354  @ =gUnknown_03005050
	ldr r0, _08038354  @ =gUnknown_03005050
	ldr r1, _08038354  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_08038338:
	.4byte gUnknown_03006C80
_0803833C:
	.4byte 0x0000FFFF
_08038340:
	.4byte gUnknown_03000F44
_08038344:
	.4byte gUnknown_03000208
_08038348:
	.4byte gUnknown_03000200
_0803834C:
	.4byte gBG0Buffer
_08038350:
	.4byte 0x01000400
_08038354:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08038238

