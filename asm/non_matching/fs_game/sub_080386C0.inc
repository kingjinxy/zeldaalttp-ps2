	THUMB_FUNC_START sub_080386C0
sub_080386C0: @ 0x080386C0
	push {r4-r7,lr}
	mov r7, sp
	ldr r1, _080386D4  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #0
	beq _080386D8
	cmp r0, #1
	beq _080386F4
	b _08038830
	.byte 0x00
	.byte 0x00
_080386D4:
	.4byte gSubState
_080386D8:
	mov r0, #4
	bl sub_08036704
	ldr r1, _080386F0  @ =gSubState
	ldr r0, _080386F0  @ =gSubState
	ldr r1, _080386F0  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038832
	.byte 0x00
	.byte 0x00
_080386F0:
	.4byte gSubState
_080386F4:
	bl sub_080367CC
	cmp r0, #1
	beq _080386FE
	b _08038824
_080386FE:
	ldr r1, _080387D0  @ =gUnknown_03005050
	ldr r0, _080387D0  @ =gUnknown_03005050
	ldr r1, _080387D0  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080387D4  @ =gSubState
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080387D8  @ =gUnknown_03000C00
	ldr r1, _080387DC  @ =gUnknown_03006D14
	ldr r2, _080387E0  @ =gUnknown_03000E20
	ldr r3, _080387E4  @ =gUnknown_03000948
	ldr r4, _080387E0  @ =gUnknown_03000E20
	ldrh r5, [r4, #4]
	mov r6, #0
	and r5, r5, r6
	add r6, r5, #0
	strh r6, [r4, #4]
	ldrh r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3]
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2]
	mov r2, #0
	strh r2, [r1]
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080387E0  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _080387E8  @ =gRandom
	ldr r1, _080387EC  @ =gUnknown_03000490
	ldr r2, [r1]
	str r2, [r0]
	mov r0, #5
	bl sub_08036704
	ldr r0, _080387F0  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _08038770
	bl sub_0802B738
_08038770:
	ldr r0, _080387F4  @ =gUnknown_030004A0
	ldr r1, _080387F4  @ =gUnknown_030004A0
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #4]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080387F4  @ =gUnknown_030004A0
	ldr r1, _080387F4  @ =gUnknown_030004A0
	ldrh r2, [r1]
	mov r3, #186
	lsl r3, r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	mov r0, #31
	mov r1, #0
	bl sub_0800CA84
	mov r0, #120
	mov r1, #80
	mov r2, #1
	mov r3, #0
	bl sub_0800CE74
	bl sub_0800C080
	ldr r0, _080387F0  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #2
	bne _080387F8
	ldr r0, _080387F0  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0803880C
	b _080387F8
	.byte 0x00
	.byte 0x00
_080387D0:
	.4byte gUnknown_03005050
_080387D4:
	.4byte gSubState
_080387D8:
	.4byte gUnknown_03000C00
_080387DC:
	.4byte gUnknown_03006D14
_080387E0:
	.4byte gUnknown_03000E20
_080387E4:
	.4byte gUnknown_03000948
_080387E8:
	.4byte gRandom
_080387EC:
	.4byte gUnknown_03000490
_080387F0:
	.4byte gUnknown_03006C80
_080387F4:
	.4byte gUnknown_030004A0
_080387F8:
	mov r0, #16
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #46
	mov r1, #0
	mov r2, #240
	bl sub_0804C938
_0803880C:
	ldr r1, _08038828  @ =gUnknown_03000FE4
	add r0, r1, #0
	mov r1, #20
	bl zero_memory
	ldr r1, _0803882C  @ =0x80010000
	add r0, r1, #0
	bl play_sound
	mov r0, #88
	bl play_sound
_08038824:
	b _08038832
	.byte 0x00
	.byte 0x00
_08038828:
	.4byte gUnknown_03000FE4
_0803882C:
	.4byte 0x80010000
_08038830:
	b _08038832
_08038832:
	bl sub_0802BFC4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080386C0

