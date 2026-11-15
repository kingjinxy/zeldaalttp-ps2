	THUMB_FUNC_START sub_080E0254
sub_080E0254: @ 0x080E0254
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r4, _080E029C  @ =gRam
	ldr r1, _080E02A0  @ =0x0000165C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080E02B0
	ldr r5, _080E02A4  @ =0x0000096C
	add r1, r4, r5
	mov r0, #10
	strh r0, [r1]
	ldr r1, _080E02A8  @ =0x00000F92
	add r0, r4, r1
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #4
	ldr r0, _080E02AC  @ =gUnknown_081766A8
	add r1, r1, r0
	mov r0, r9
	bl sub_080C94AC
	mov r0, #10
	bl sub_080C64A0
	b _080E0370
	.byte 0x00
	.byte 0x00
_080E029C:
	.4byte gRam
_080E02A0:
	.4byte 0x0000165C
_080E02A4:
	.4byte 0x0000096C
_080E02A8:
	.4byte 0x00000F92
_080E02AC:
	.4byte gUnknown_081766A8
_080E02B0:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E0370
	ldr r5, _080E0380  @ =0x00000F92
	add r0, r4, r5
	add r0, r0, r9
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #26
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r0, #11
	mov r8, r0
	add r7, sp, #4
	mov r10, r4
_080E02DC:
	ldr r6, [sp, #8]
	add r6, r6, r8
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080E0384  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r10
	ldr r1, _080E0388  @ =gUnknown_08176748
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E038C  @ =0x00000964
	add r3, r3, r10
	ldr r2, _080E0390  @ =gUnknown_08176760
	add r2, r6, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E0394  @ =gUnknown_08176778
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080E0398  @ =gUnknown_08176790
	add r4, r6, r4
	ldrb r4, [r4]
	ldr r5, _080E039C  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080E03A0  @ =gUnknown_081767A8
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6004
	mov r0, r8
	lsl r1, r0, #24
	mov r5, #255
	lsl r5, r5, #24
	add r1, r1, r5
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r0, r1, #24
	mov r8, r0
	cmp r1, #0
	bge _080E02DC
	mov r0, r9
	mov r1, #255
	mov r2, #11
	bl sub_080C5DA0
	mov r0, #12
	bl sub_080C64A0
_080E0370:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E0380:
	.4byte 0x00000F92
_080E0384:
	.4byte gUnknown_03003E74
_080E0388:
	.4byte gUnknown_08176748
_080E038C:
	.4byte 0x00000964
_080E0390:
	.4byte gUnknown_08176760
_080E0394:
	.4byte gUnknown_08176778
_080E0398:
	.4byte gUnknown_08176790
_080E039C:
	.4byte gUnknown_03002B99
_080E03A0:
	.4byte gUnknown_081767A8
	THUMB_FUNC_END sub_080E0254

