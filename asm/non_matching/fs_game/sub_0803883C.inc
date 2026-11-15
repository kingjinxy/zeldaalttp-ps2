	THUMB_FUNC_START sub_0803883C
sub_0803883C: @ 0x0803883C
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	bl sub_08037554
	cmp r0, #0
	bne _0803884C
	b _08038A10
_0803884C:
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_08038852:
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #3
	bls _0803885C
	b _080388A0
_0803885C:
	ldr r0, _08038898  @ =gUnknown_03000940
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldr r1, _0803889C  @ =gUnknown_03005E10
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038852
_08038898:
	.4byte gUnknown_03000940
_0803889C:
	.4byte gUnknown_03005E10
_080388A0:
	ldr r0, _08038924  @ =gHeldKeys
	ldr r1, _08038928  @ =gNewKeys
	mov r2, #0
	strh r2, [r1]
	mov r1, #0
	strh r1, [r0]
	ldr r0, _0803892C  @ =gUnknown_0200B1D0
	ldr r1, _08038930  @ =gUnknown_03000494
	ldr r2, [r1]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #1
	ldr r2, _08038934  @ =gLCDRegisterBuffer
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038938  @ =gRandom
	ldr r1, _0803893C  @ =gUnknown_03000490
	ldr r2, [r1]
	str r2, [r0]
	ldr r0, _08038940  @ =gUnknown_03000E20
	ldrh r1, [r0, #4]
	ldr r0, _08038944  @ =0x00000117
	cmp r1, r0
	bhi _08038980
	ldr r0, _08038940  @ =gUnknown_03000E20
	ldrh r2, [r0, #4]
	ldr r1, _08038940  @ =gUnknown_03000E20
	ldrh r0, [r1]
	add r3, r0, #0
	lsl r1, r3, #2
	add r1, r1, r0
	mov r0, #255
	add r3, r1, #0
	and r3, r3, r0
	mov r0, #120
	mov r1, #80
	bl sub_0800CE74
	ldr r0, _08038940  @ =gUnknown_03000E20
	ldrh r1, [r0, #4]
	cmp r1, #139
	bhi _08038948
	ldr r0, _08038940  @ =gUnknown_03000E20
	ldr r1, _08038940  @ =gUnknown_03000E20
	ldrh r2, [r1, #4]
	add r1, r2, #3
	ldrh r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #4]
	b _08038960
	.byte 0x00
	.byte 0x00
_08038924:
	.4byte gHeldKeys
_08038928:
	.4byte gNewKeys
_0803892C:
	.4byte gUnknown_0200B1D0
_08038930:
	.4byte gUnknown_03000494
_08038934:
	.4byte gLCDRegisterBuffer
_08038938:
	.4byte gRandom
_0803893C:
	.4byte gUnknown_03000490
_08038940:
	.4byte gUnknown_03000E20
_08038944:
	.4byte 0x00000117
_08038948:
	ldr r0, _0803897C  @ =gUnknown_03000E20
	ldr r1, _0803897C  @ =gUnknown_03000E20
	ldrh r2, [r1, #4]
	add r1, r2, #4
	ldrh r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #4]
_08038960:
	ldr r1, _0803897C  @ =gUnknown_03000E20
	ldr r0, _0803897C  @ =gUnknown_03000E20
	ldr r1, _0803897C  @ =gUnknown_03000E20
	ldrh r2, [r1]
	add r1, r2, #1
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _080389E8
_0803897C:
	.4byte gUnknown_03000E20
_08038980:
	bl sub_0803A20C
	bl sub_0800CA3C
	ldr r1, _08038A18  @ =gUnknown_03005050
	ldr r0, _08038A18  @ =gUnknown_03005050
	ldr r1, _08038A18  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038A1C  @ =gSubState
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08038A20  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038A24  @ =gUnknown_03006C80
	ldr r1, _08038A24  @ =gUnknown_03006C80
	ldrb r2, [r1, #5]
	mov r3, #127
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #5]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #5]
	ldr r0, _08038A28  @ =gUnknown_03000FC0
	ldr r1, _08038A28  @ =gUnknown_03000FC0
	add r2, r1, #0
	add r1, r1, #36
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #16]
	bl sub_0800D6F4
	bl sub_0800D744
_080389E8:
	ldr r0, _08038A2C  @ =gUnknown_03006C70
	ldr r4, [r0]
	bl _call_via_r4
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
	bl sub_0802CD3C
	bl sub_0803F284
	bl sub_08000BAC
	bl sub_0802BFC4
	bl sub_08037574
_08038A10:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_08038A18:
	.4byte gUnknown_03005050
_08038A1C:
	.4byte gSubState
_08038A20:
	.4byte gUnknown_03000E20
_08038A24:
	.4byte gUnknown_03006C80
_08038A28:
	.4byte gUnknown_03000FC0
_08038A2C:
	.4byte gUnknown_03006C70
	THUMB_FUNC_END sub_0803883C

