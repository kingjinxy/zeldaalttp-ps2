	THUMB_FUNC_START sub_0803DD94
sub_0803DD94: @ 0x0803DD94
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #2
	mov r1, #0
	strh r1, [r0]
_0803DDA0:
	add r0, r7, #2
	ldrh r1, [r0]
	cmp r1, #3
	bls _0803DDAA
	b _0803DE34
_0803DDAA:
	add r0, r7, #0
	ldr r1, _0803DE28  @ =gUnknown_03000FC0
	add r3, r7, #2
	ldrh r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #2
	add r3, r3, r2
	lsl r2, r3, #2
	add r1, r1, r2
	ldrh r2, [r1, #58]
	strh r2, [r0]
	ldr r0, _0803DE2C  @ =gUnknown_03005E10
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	add r1, r7, #0
	add r2, r7, #0
	ldr r3, _0803DE30  @ =gUnknown_03000940
	add r4, r7, #2
	ldrh r5, [r4]
	add r4, r5, #0
	lsl r5, r4, #1
	add r3, r3, r5
	ldrh r2, [r2]
	ldrh r3, [r3]
	eor r2, r2, r3
	ldrh r1, [r1]
	add r3, r2, #0
	and r1, r1, r3
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0803DE30  @ =gUnknown_03000940
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	add r1, r7, #0
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r1, r7, #2
	add r0, r7, #2
	add r1, r7, #2
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _0803DDA0
_0803DE28:
	.4byte gUnknown_03000FC0
_0803DE2C:
	.4byte gUnknown_03005E10
_0803DE30:
	.4byte gUnknown_03000940
_0803DE34:
	ldr r0, _0803DE78  @ =gUnknown_03000950
	ldr r1, _0803DE7C  @ =gUnknown_03000940
	ldr r2, _0803DE80  @ =gLCDRegisterBuffer
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _0803DE84  @ =gUnknown_03006734
	ldr r1, _0803DE88  @ =gUnknown_03005E10
	ldr r2, _0803DE80  @ =gLCDRegisterBuffer
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _0803DE8C  @ =gUnknown_03000FC0
	ldr r1, _0803DE90  @ =gHeldKeys
	ldrh r2, [r0, #18]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #18]
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803DE78:
	.4byte gUnknown_03000950
_0803DE7C:
	.4byte gUnknown_03000940
_0803DE80:
	.4byte gLCDRegisterBuffer
_0803DE84:
	.4byte gUnknown_03006734
_0803DE88:
	.4byte gUnknown_03005E10
_0803DE8C:
	.4byte gUnknown_03000FC0
_0803DE90:
	.4byte gHeldKeys
	THUMB_FUNC_END sub_0803DD94

