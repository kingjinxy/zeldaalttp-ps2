	THUMB_FUNC_START sub_080973A8
sub_080973A8: @ 0x080973A8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0809750C  @ =gRam
	ldr r1, _08097510  @ =0x0000188A
	add r2, r0, r1
	ldrb r1, [r2]
	add r7, r0, #0
	cmp r1, #0
	bne _080973C0
	b _08097500
_080973C0:
	ldr r4, _08097514  @ =0x000016C8
	add r0, r7, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080973D0
	cmp r0, #255
	beq _080973D0
	b _08097500
_080973D0:
	ldr r1, _08097518  @ =0x00001808
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080973E0
	b _08097500
_080973E0:
	ldr r4, _0809751C  @ =0x00001718
	add r0, r7, r4
	ldrb r0, [r0]
	cmp r0, #19
	bne _080973EC
	b _08097500
_080973EC:
	ldr r1, _08097520  @ =0x00001702
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080973F8
	b _08097500
_080973F8:
	add r4, r4, #236
	add r0, r7, r4
	ldrb r0, [r0]
	ldr r4, _08097524  @ =gUnknown_08167DDE
	cmp r0, #0
	beq _08097422
	add r1, r1, #125
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #32
	bne _08097422
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r4
	ldr r2, _08097528  @ =0x00001727
	add r1, r7, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _08097500
_08097422:
	add r5, r7, #0
	ldr r0, _0809752C  @ =0x0000172A
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08097528  @ =0x00001727
	add r3, r5, r1
	ldr r0, _08097510  @ =0x0000188A
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r4
	ldrb r1, [r3]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r3]
	ldr r1, _08097530  @ =gUnknown_08167DE2
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r6, [r0]
	ldr r1, _08097534  @ =0x00001732
	add r0, r5, r1
	strb r6, [r0]
	ldr r1, _08097538  @ =gUnknown_08167DE6
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r2, [r0]
	ldr r4, _0809753C  @ =0x00001733
	add r0, r5, r4
	strb r2, [r0]
	lsl r1, r2, #28
	lsr r1, r1, #24
	ldr r0, _08097540  @ =0x00000AC2
	add r0, r0, r5
	mov r8, r0
	ldrh r3, [r0]
	lsr r0, r3, #8
	add r1, r1, r0
	mov r4, #255
	lsl r4, r4, #8
	mov r12, r4
	add r0, r1, #0
	and r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	lsr r4, r0, #31
	mov r0, #255
	mov r9, r0
	and r0, r0, r3
	lsl r1, r1, #8
	add r3, r0, r1
	mov r1, r8
	strh r3, [r1]
	lsl r2, r2, #24
	lsr r1, r2, #28
	cmp r2, #0
	bge _080974A6
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r1, r0, #24
_080974A6:
	ldr r0, _08097544  @ =0x000016C4
	add r2, r5, r0
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r4
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	lsl r1, r6, #28
	lsr r1, r1, #24
	lsl r0, r3, #24
	lsr r0, r0, #24
	add r1, r1, r0
	add r0, r1, #0
	mov r2, r12
	and r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	lsr r4, r0, #31
	and r3, r3, r2
	mov r0, r9
	and r1, r1, r0
	add r0, r3, r1
	mov r1, r8
	strh r0, [r1]
	lsl r0, r6, #24
	lsr r1, r0, #28
	cmp r0, #0
	bge _080974EE
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r1, r0, #24
_080974EE:
	mov r0, #182
	lsl r0, r0, #5
	add r2, r7, r0
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r4
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
_08097500:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0809750C:
	.4byte gRam
_08097510:
	.4byte 0x0000188A
_08097514:
	.4byte 0x000016C8
_08097518:
	.4byte 0x00001808
_0809751C:
	.4byte 0x00001718
_08097520:
	.4byte 0x00001702
_08097524:
	.4byte gUnknown_08167DDE
_08097528:
	.4byte 0x00001727
_0809752C:
	.4byte 0x0000172A
_08097530:
	.4byte gUnknown_08167DE2
_08097534:
	.4byte 0x00001732
_08097538:
	.4byte gUnknown_08167DE6
_0809753C:
	.4byte 0x00001733
_08097540:
	.4byte 0x00000AC2
_08097544:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080973A8

