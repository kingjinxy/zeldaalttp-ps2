	THUMB_FUNC_START sub_08037574
sub_08037574: @ 0x08037574
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	ldr r1, _080376DC  @ =gUnknown_0200B1D0
	ldr r2, _080376E0  @ =gUnknown_03000494
	ldr r3, [r2]
	mov r5, #15
	add r2, r3, #0
	and r2, r2, r5
	add r3, r2, #0
	lsl r2, r3, #1
	ldr r3, _080376E4  @ =gLCDRegisterBuffer
	ldrb r5, [r3]
	add r3, r5, #0
	lsl r5, r3, #5
	add r2, r2, r5
	add r1, r1, r2
	ldr r2, _080376E8  @ =gHeldKeys
	ldrh r4, [r2]
	add r2, r4, #0
	ldr r3, _080376EC  @ =gUnknown_02000010
	ldrb r5, [r3]
	mov r6, #127
	add r3, r5, #0
	and r3, r3, r6
	add r6, r3, #0
	lsl r5, r6, #24
	lsr r3, r5, #24
	cmp r3, #0
	beq _080375B8
	mov r3, #128
	lsl r3, r3, #3
	orr r2, r2, r3
_080375B8:
	ldrh r3, [r1]
	mov r5, #0
	and r3, r3, r5
	add r5, r3, #0
	add r3, r2, #0
	orr r5, r5, r3
	add r3, r5, #0
	strh r3, [r1]
	add r1, r2, #0
	mov r2, #0
	bic r1, r1, r2
	ldrh r2, [r0, #38]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #38]
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	ldr r1, _080376DC  @ =gUnknown_0200B1D0
	ldr r2, _080376E0  @ =gUnknown_03000494
	ldr r3, [r2]
	sub r2, r3, #1
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	ldr r3, _080376E4  @ =gLCDRegisterBuffer
	ldrb r5, [r3]
	add r3, r5, #0
	lsl r5, r3, #5
	add r2, r2, r5
	add r1, r1, r2
	ldrh r2, [r0, #40]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #40]
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	ldr r1, _080376DC  @ =gUnknown_0200B1D0
	ldr r2, _080376E0  @ =gUnknown_03000494
	ldr r3, [r2]
	sub r2, r3, #2
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	ldr r3, _080376E4  @ =gLCDRegisterBuffer
	ldrb r5, [r3]
	add r3, r5, #0
	lsl r5, r3, #5
	add r2, r2, r5
	add r1, r1, r2
	ldrh r2, [r0, #42]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #42]
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	ldr r1, _080376DC  @ =gUnknown_0200B1D0
	ldr r2, _080376E0  @ =gUnknown_03000494
	ldr r3, [r2]
	sub r2, r3, #3
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	ldr r3, _080376E4  @ =gLCDRegisterBuffer
	ldrb r5, [r3]
	add r3, r5, #0
	lsl r5, r3, #5
	add r2, r2, r5
	add r1, r1, r2
	ldrh r2, [r0, #44]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #44]
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	ldr r1, _080376DC  @ =gUnknown_0200B1D0
	ldr r2, _080376E0  @ =gUnknown_03000494
	ldr r3, [r2]
	sub r2, r3, #4
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	ldr r3, _080376E4  @ =gLCDRegisterBuffer
	ldrb r5, [r3]
	add r3, r5, #0
	lsl r5, r3, #5
	add r2, r2, r5
	add r1, r1, r2
	ldrh r2, [r0, #46]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #46]
	ldr r2, _080376D8  @ =gUnknown_03000FC0
	ldr r0, _080376E0  @ =gUnknown_03000494
	ldr r1, [r0]
	str r1, [r2, #48]
	add r1, r1, #1
	str r1, [r0]
	ldr r0, _080376D8  @ =gUnknown_03000FC0
	add r1, r0, #0
	add r0, r0, #37
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080376F0  @ =gUnknown_03000FE4
	ldr r1, _080376F4  @ =gUnknown_03000FD0
	ldr r2, _080376F8  @ =0x04000005
	bl CpuSet
	mov r0, #0
	str r0, [r7]
_080376D0:
	ldr r0, [r7]
	cmp r0, #3
	ble _080376FC
	b _08037748
_080376D8:
	.4byte gUnknown_03000FC0
_080376DC:
	.4byte gUnknown_0200B1D0
_080376E0:
	.4byte gUnknown_03000494
_080376E4:
	.4byte gLCDRegisterBuffer
_080376E8:
	.4byte gHeldKeys
_080376EC:
	.4byte gUnknown_02000010
_080376F0:
	.4byte gUnknown_03000FE4
_080376F4:
	.4byte gUnknown_03000FD0
_080376F8:
	.4byte 0x04000005
_080376FC:
	ldr r0, _0803773C  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	ldr r0, [r7]
	cmp r0, r1
	beq _08037734
	ldr r0, _08037740  @ =gUnknown_0200B1D0
	ldr r1, _08037744  @ =gUnknown_03000494
	ldr r2, [r1]
	sub r1, r2, #1
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	ldr r2, [r7]
	add r3, r2, #0
	lsl r2, r3, #5
	add r1, r1, r2
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #192
	lsl r3, r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_08037734:
	ldr r0, [r7]
	add r1, r0, #1
	str r1, [r7]
	b _080376D0
_0803773C:
	.4byte gLCDRegisterBuffer
_08037740:
	.4byte gUnknown_0200B1D0
_08037744:
	.4byte gUnknown_03000494
_08037748:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08037574

