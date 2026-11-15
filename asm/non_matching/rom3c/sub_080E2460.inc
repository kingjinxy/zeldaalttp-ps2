	THUMB_FUNC_START sub_080E2460
sub_080E2460: @ 0x080E2460
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080E2570  @ =gRam
	ldr r2, _080E2574  @ =0x00000FF2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	sub r1, r1, #65
	lsl r1, r1, #24
	lsr r1, r1, #24
	str r1, [sp, #4]
	ldr r5, _080E2578  @ =0x00000F92
	add r3, r4, r5
	add r3, r0, r3
	ldrb r1, [r3]
	lsl r1, r1, #1
	ldr r5, _080E257C  @ =0x0000096C
	add r2, r4, r5
	strb r1, [r2]
	ldr r2, _080E2580  @ =gUnknown_08176D68
	ldr r5, _080E2584  @ =0x00000FB2
	add r1, r4, r5
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r9, r0
	mov r0, #1
	add r7, r4, #0
	mov r8, r3
	ldr r1, _080E2588  @ =gUnknown_08176DA4
	mov r10, r1
_080E24AE:
	lsl r0, r0, #24
	asr r6, r0, #24
	lsl r2, r6, #1
	mov r3, r8
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r0, r2, r0
	ldr r5, _080E258C  @ =gUnknown_08176D6C
	add r0, r0, r5
	ldrh r1, [r0]
	ldr r3, _080E2590  @ =0x000015ED
	add r0, r7, r3
	strb r1, [r0]
	mov r5, r8
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r0, r2, r0
	add r0, r0, r10
	ldrh r1, [r0]
	sub r3, r3, #1
	add r0, r7, r3
	strb r1, [r0]
	ldr r1, _080E2594  @ =gUnknown_08176DDC
	ldrb r3, [r5]
	lsl r0, r3, #1
	add r4, r6, r0
	add r1, r4, r1
	ldrb r5, [r1]
	ldr r0, [sp, #4]
	cmp r0, #1
	bhi _080E24EE
	add r5, r5, #3
_080E24EE:
	ldr r0, _080E2598  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r9
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp, #8]
	lsl r3, r3, #2
	add r3, r2, r3
	ldr r1, _080E258C  @ =gUnknown_08176D6C
	add r1, r1, r3
	mov r12, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldrh r1, [r1]
	mov r0, r12
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	str r1, [sp, #12]
	add r3, r3, r10
	ldr r1, _080E259C  @ =0x00000964
	add r2, r7, r1
	ldrh r2, [r2]
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E25A0  @ =gUnknown_08176DF8
	add r3, r4, r3
	ldrb r3, [r3]
	ldr r0, _080E25A4  @ =gUnknown_03002B99
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	orr r3, r3, r0
	lsl r3, r3, #8
	add r3, r5, r3
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r1, #0
	str r1, [sp]
	ldr r0, [sp, #8]
	ldr r1, [sp, #12]
	bl sub_080C6368
	sub r1, r6, #1
	lsl r1, r1, #24
	mov r0, r9
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsr r0, r1, #24
	cmp r1, #0
	bge _080E24AE
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E2570:
	.4byte gRam
_080E2574:
	.4byte 0x00000FF2
_080E2578:
	.4byte 0x00000F92
_080E257C:
	.4byte 0x0000096C
_080E2580:
	.4byte gUnknown_08176D68
_080E2584:
	.4byte 0x00000FB2
_080E2588:
	.4byte gUnknown_08176DA4
_080E258C:
	.4byte gUnknown_08176D6C
_080E2590:
	.4byte 0x000015ED
_080E2594:
	.4byte gUnknown_08176DDC
_080E2598:
	.4byte gUnknown_03003E74
_080E259C:
	.4byte 0x00000964
_080E25A0:
	.4byte gUnknown_08176DF8
_080E25A4:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080E2460

