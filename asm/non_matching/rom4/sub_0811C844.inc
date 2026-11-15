	THUMB_FUNC_START sub_0811C844
sub_0811C844: @ 0x0811C844
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0811C94C  @ =gRam
	ldr r3, _0811C950  @ =0x00000DC5
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	mov r5, #150
	lsl r5, r5, #4
	add r4, r2, r5
	strb r1, [r4]
	add r3, r3, #20
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r5, r5, #1
	add r1, r2, r5
	strb r3, [r1]
	ldr r3, _0811C954  @ =0x00000DCF
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	add r5, r5, #3
	add r5, r5, r2
	mov r8, r5
	strb r1, [r5]
	add r3, r3, #20
	add r1, r2, r3
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r5, _0811C958  @ =0x00000965
	add r0, r2, r5
	strb r1, [r0]
	ldrh r1, [r4]
	mov r0, #24
	add r0, r0, r1
	mov r12, r0
	ldr r3, _0811C95C  @ =0x00000968
	add r3, r3, r2
	mov r9, r3
	strh r0, [r3]
	mov r5, r8
	ldrh r0, [r5]
	add r0, r0, #32
	ldr r3, _0811C960  @ =0x0000096C
	add r7, r2, r3
	strh r0, [r7]
	mov r5, #182
	lsl r5, r5, #5
	add r5, r5, r2
	mov r10, r5
	ldrh r4, [r5]
	add r0, r4, #0
	add r0, r0, #8
	add r3, r3, #4
	add r6, r2, r3
	strh r0, [r6]
	lsl r0, r0, #16
	lsl r1, r1, #16
	asr r5, r0, #16
	add r3, r2, #0
	cmp r0, r1
	blt _0811C928
	mov r1, r12
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, r5
	ble _0811C928
	ldr r2, _0811C964  @ =0x000016C4
	add r0, r3, r2
	mov r5, #0
	ldrsh r0, [r0, r5]
	add r1, r0, #0
	add r1, r1, #8
	mov r2, r8
	mov r5, #0
	ldrsh r0, [r2, r5]
	cmp r1, r0
	blt _0811C928
	mov r2, #0
	ldrsh r0, [r7, r2]
	cmp r0, r1
	ble _0811C928
	mov r5, #0
	ldrsh r1, [r6, r5]
	mov r2, r9
	mov r5, #0
	ldrsh r0, [r2, r5]
	sub r2, r1, r0
	cmp r2, #0
	bge _0811C906
	neg r2, r2
_0811C906:
	ldr r1, _0811C968  @ =0x00000974
	add r0, r3, r1
	strh r2, [r0]
	add r0, r4, r2
	mov r5, r10
	strh r0, [r5]
	ldr r0, _0811C96C  @ =0x000016D6
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, r2
	strb r0, [r1]
	ldr r1, _0811C970  @ =0x000016FA
	add r2, r3, r1
	ldrb r0, [r2]
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
_0811C928:
	ldr r2, _0811C974  @ =0x000016D5
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811C93E
	ldr r5, _0811C970  @ =0x000016FA
	add r2, r3, r5
	ldrb r1, [r2]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r2]
_0811C93E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811C94C:
	.4byte gRam
_0811C950:
	.4byte 0x00000DC5
_0811C954:
	.4byte 0x00000DCF
_0811C958:
	.4byte 0x00000965
_0811C95C:
	.4byte 0x00000968
_0811C960:
	.4byte 0x0000096C
_0811C964:
	.4byte 0x000016C4
_0811C968:
	.4byte 0x00000974
_0811C96C:
	.4byte 0x000016D6
_0811C970:
	.4byte 0x000016FA
_0811C974:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_0811C844

