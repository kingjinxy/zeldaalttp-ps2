	THUMB_FUNC_START sub_080D9580
sub_080D9580: @ 0x080D9580
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r7, r1, #24
	ldr r2, _080D966C  @ =gRam
	ldr r0, _080D9670  @ =0x0000096D
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	ldr r4, _080D9674  @ =0x00001072
	add r0, r2, r4
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D95B4
	ldr r5, _080D9678  @ =0x00000996
	add r0, r2, r5
	ldrb r0, [r0]
	strb r0, [r1]
_080D95B4:
	ldr r1, _080D967C  @ =0x00000FB2
	add r0, r2, r1
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, #255
	ldr r3, _080D9680  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r4, #1
	mov r9, r4
	add r6, r2, #0
	mov r8, r1
	mov r5, #15
	mov r10, r5
_080D95D0:
	mov r0, r8
	ldrb r5, [r0]
	mov r3, #15
	and r3, r3, r5
	ldr r1, _080D9670  @ =0x0000096D
	add r0, r6, r1
	ldrb r0, [r0]
	add r5, r5, r0
	mov r2, r10
	and r5, r5, r2
	ldr r0, _080D9684  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r4, #150
	lsl r4, r4, #4
	add r2, r6, r4
	ldr r1, _080D9688  @ =gUnknown_08175960
	lsl r3, r3, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080D968C  @ =0x00000964
	add r4, r6, r2
	ldr r2, _080D9690  @ =gUnknown_08175980
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080D9694  @ =gUnknown_081759A0
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080D9698  @ =gUnknown_081759B0
	add r5, r5, r4
	ldrb r4, [r5]
	ldr r5, _080D969C  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r0, r9
	lsl r1, r0, #24
	mov r2, #255
	lsl r2, r2, #24
	add r1, r1, r2
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r3, r8
	ldrb r0, [r3]
	add r0, r0, #2
	strb r0, [r3]
	lsr r4, r1, #24
	mov r9, r4
	cmp r1, #0
	bge _080D95D0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080D966C:
	.4byte gRam
_080D9670:
	.4byte 0x0000096D
_080D9674:
	.4byte 0x00001072
_080D9678:
	.4byte 0x00000996
_080D967C:
	.4byte 0x00000FB2
_080D9680:
	.4byte 0x0000096C
_080D9684:
	.4byte gUnknown_03003E74
_080D9688:
	.4byte gUnknown_08175960
_080D968C:
	.4byte 0x00000964
_080D9690:
	.4byte gUnknown_08175980
_080D9694:
	.4byte gUnknown_081759A0
_080D9698:
	.4byte gUnknown_081759B0
_080D969C:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080D9580

