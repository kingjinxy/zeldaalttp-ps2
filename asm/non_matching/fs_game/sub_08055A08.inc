	THUMB_FUNC_START sub_08055A08
sub_08055A08: @ 0x08055A08
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r1, _08055A74  @ =gUnknown_03006A30
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, _08055A78  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #10]
	cmp r0, r1
	bne _08055A6C
	ldr r0, _08055A7C  @ =gUnknown_0202D0D0
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	mov r3, #1
	add r1, r3, #0
	lsl r1, r1, r2
	ldr r2, [r0]
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _08055A6C
	ldr r0, _08055A7C  @ =gUnknown_0202D0D0
	ldr r1, _08055A7C  @ =gUnknown_0202D0D0
	ldr r2, [r7, #4]
	ldrb r3, [r2, #28]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldr r1, [r1]
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, _08055A80  @ =gUnknown_08428D94
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	add r0, r1, #0
	bl sub_0800D67C
_08055A6C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
_08055A74:
	.4byte gUnknown_03006A30
_08055A78:
	.4byte gLCDRegisterBuffer
_08055A7C:
	.4byte gUnknown_0202D0D0
_08055A80:
	.4byte gUnknown_08428D94
	THUMB_FUNC_END sub_08055A08

