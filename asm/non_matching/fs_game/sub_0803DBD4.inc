	THUMB_FUNC_START sub_0803DBD4
sub_0803DBD4: @ 0x0803DBD4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, _0803DC04  @ =gHeldKeys
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #6
	ldr r1, _0803DC08  @ =gNewKeys
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _0803DC0C  @ =gUnknown_03006620
	ldr r1, [r7]
	str r1, [r0]
	ldr r0, _0803DC10  @ =gMainState
	ldrb r1, [r0]
	cmp r1, #2
	beq _0803DC14
	ldr r0, _0803DC10  @ =gMainState
	ldrb r1, [r0]
	cmp r1, #12
	beq _0803DC14
	b _0803DC38
_0803DC04:
	.4byte gHeldKeys
_0803DC08:
	.4byte gNewKeys
_0803DC0C:
	.4byte gUnknown_03006620
_0803DC10:
	.4byte gMainState
_0803DC14:
	ldr r0, _0803DC58  @ =gHeldKeys
	ldr r1, _0803DC5C  @ =gUnknown_03000940
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _0803DC60  @ =gNewKeys
	ldr r1, _0803DC64  @ =gUnknown_03005E10
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	strh r2, [r0]
_0803DC38:
	ldr r0, [r7]
	bl 0x080045FC
	ldr r0, _0803DC58  @ =gHeldKeys
	add r1, r7, #4
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _0803DC60  @ =gNewKeys
	add r1, r7, #6
	ldrh r2, [r1]
	strh r2, [r0]
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803DC58:
	.4byte gHeldKeys
_0803DC5C:
	.4byte gUnknown_03000940
_0803DC60:
	.4byte gNewKeys
_0803DC64:
	.4byte gUnknown_03005E10
	THUMB_FUNC_END sub_0803DBD4

