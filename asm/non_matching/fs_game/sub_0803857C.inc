	THUMB_FUNC_START sub_0803857C
sub_0803857C: @ 0x0803857C
	push {r4,r5,r7,lr}
	mov r7, sp
	mov r0, #128
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _0803868C  @ =gUnknown_030004A0
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038690  @ =gRandom
	ldr r1, _08038694  @ =gUnknown_03000490
	ldr r2, [r1]
	str r2, [r0]
	bl sub_08012BE4
	bl sub_08015AC4
	bl sub_08013804
	bl sub_0802C800
	bl sub_0803A544
	bl sub_0802B6BC
	ldr r0, _08038698  @ =gHeldKeys
	ldr r1, _0803869C  @ =gNewKeys
	mov r2, #0
	strh r2, [r1]
	mov r1, #0
	strh r1, [r0]
	ldr r0, _080386A0  @ =gUnknown_03000940
	ldr r1, _080386A0  @ =gUnknown_03000940
	ldr r2, _080386A0  @ =gUnknown_03000940
	ldr r3, _080386A0  @ =gUnknown_03000940
	ldrh r4, [r3, #6]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3, #6]
	ldrh r3, [r2, #4]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2, #4]
	ldrh r2, [r1, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #2]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _080386A4  @ =gUnknown_03005E10
	ldr r1, _080386A4  @ =gUnknown_03005E10
	ldr r2, _080386A4  @ =gUnknown_03005E10
	ldr r3, _080386A4  @ =gUnknown_03005E10
	ldrh r4, [r3, #6]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3, #6]
	ldrh r3, [r2, #4]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2, #4]
	ldrh r2, [r1, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #2]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _080386A8  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _080386AC  @ =gUnknown_03000C00
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080386B0  @ =gUnknown_03006D14
	mov r1, #1
	strh r1, [r0]
	ldr r0, _080386B4  @ =gUnknown_03000830
	mov r1, #0
	strb r1, [r0]
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r0, _0803868C  @ =gUnknown_030004A0
	ldr r1, _0803868C  @ =gUnknown_030004A0
	ldrh r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #4]
	ldr r0, _0803868C  @ =gUnknown_030004A0
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r1, _080386B8  @ =gUnknown_03005050
	ldr r0, _080386B8  @ =gUnknown_03005050
	ldr r1, _080386B8  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080386BC  @ =gSubState
	mov r1, #0
	strb r1, [r0]
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803868C:
	.4byte gUnknown_030004A0
_08038690:
	.4byte gRandom
_08038694:
	.4byte gUnknown_03000490
_08038698:
	.4byte gHeldKeys
_0803869C:
	.4byte gNewKeys
_080386A0:
	.4byte gUnknown_03000940
_080386A4:
	.4byte gUnknown_03005E10
_080386A8:
	.4byte gUnknown_03000E20
_080386AC:
	.4byte gUnknown_03000C00
_080386B0:
	.4byte gUnknown_03006D14
_080386B4:
	.4byte gUnknown_03000830
_080386B8:
	.4byte gUnknown_03005050
_080386BC:
	.4byte gSubState
	THUMB_FUNC_END sub_0803857C

