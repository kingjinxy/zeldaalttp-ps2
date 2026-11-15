	THUMB_FUNC_START sub_08094460
sub_08094460: @ 0x08094460
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r6, _0809447C  @ =gRam
	ldr r1, _08094480  @ =0x00000B14
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #1
	bne _08094484
	mov r2, #161
	lsl r2, r2, #4
	add r1, r6, r2
	mov r0, #0
	b _08094508
_0809447C:
	.4byte gRam
_08094480:
	.4byte 0x00000B14
_08094484:
	mov r7, #182
	lsl r7, r7, #5
	add r4, r6, r7
	ldr r1, _08094514  @ =0x000017A2
	add r0, r6, r1
	ldrh r2, [r4]
	ldrh r0, [r0]
	sub r0, r2, r0
	mov r7, #150
	lsl r7, r7, #4
	add r7, r7, r6
	mov r12, r7
	strh r0, [r7]
	ldr r0, _08094518  @ =0x000016C4
	add r5, r6, r0
	add r1, r1, #2
	add r0, r6, r1
	ldrh r3, [r5]
	ldrh r0, [r0]
	sub r0, r3, r0
	ldr r7, _0809451C  @ =0x00000964
	add r7, r7, r6
	mov r8, r7
	strh r0, [r7]
	ldr r1, _08094520  @ =0x00000958
	add r0, r6, r1
	ldr r7, _08094524  @ =0x00000956
	add r1, r6, r7
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r2, r2, r0
	strh r2, [r4]
	ldr r1, _08094528  @ =0x00000952
	add r0, r6, r1
	mov r2, #149
	lsl r2, r2, #4
	add r1, r6, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, r0
	strh r3, [r5]
	ldr r7, _0809452C  @ =0x00001727
	add r0, r6, r7
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094500
	ldr r0, _08094530  @ =0x000016D6
	add r1, r6, r0
	mov r2, r12
	ldrb r0, [r2]
	ldrb r7, [r1]
	add r0, r0, r7
	strb r0, [r1]
	ldr r0, _08094534  @ =0x000016D7
	add r1, r6, r0
	mov r2, r8
	ldrb r0, [r2]
	ldrb r7, [r1]
	add r0, r0, r7
	strb r0, [r1]
_08094500:
	mov r0, #161
	lsl r0, r0, #4
	add r1, r6, r0
	mov r0, #0
_08094508:
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08094514:
	.4byte 0x000017A2
_08094518:
	.4byte 0x000016C4
_0809451C:
	.4byte 0x00000964
_08094520:
	.4byte 0x00000958
_08094524:
	.4byte 0x00000956
_08094528:
	.4byte 0x00000952
_0809452C:
	.4byte 0x00001727
_08094530:
	.4byte 0x000016D6
_08094534:
	.4byte 0x000016D7
	THUMB_FUNC_END sub_08094460

