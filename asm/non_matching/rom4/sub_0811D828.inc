	THUMB_FUNC_START sub_0811D828
sub_0811D828: @ 0x0811D828
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _0811D8F4  @ =gRam
	ldr r2, _0811D8F8  @ =0x0000188B
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811D846
	b _0811D96C
_0811D846:
	mov r7, #11
	add r6, r1, #0
	mov r3, #255
	lsl r3, r3, #8
	mov r9, r3
	ldr r1, _0811D8FC  @ =0x0000187A
	add r0, r6, r1
	add r0, r0, r5
	mov r10, r0
	ldr r2, _0811D900  @ =0x00000A74
	add r0, r6, r2
	add r0, r0, r5
	mov r8, r0
_0811D860:
	ldr r3, _0811D904  @ =0x00000DC5
	add r0, r6, r3
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r1, _0811D908  @ =0x00000DD9
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811D90C  @ =gUnknown_0817F9F0
	lsl r4, r7, #1
	add r0, r4, r0
	orr r3, r3, r1
	ldrh r0, [r0]
	add r3, r3, r0
	ldr r2, _0811D910  @ =gUnknown_03002B90
	strh r3, [r2]
	ldr r1, _0811D914  @ =0x00000DCF
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	add r1, r1, #20
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811D918  @ =gUnknown_0817FA08
	add r4, r4, r0
	orr r2, r2, r1
	ldrh r4, [r4]
	add r2, r2, r4
	ldr r0, _0811D91C  @ =gUnknown_03002B94
	strh r2, [r0]
	ldr r1, _0811D920  @ =0x00001732
	add r0, r6, r1
	strb r3, [r0]
	add r1, r1, #1
	add r0, r6, r1
	mov r1, r9
	and r3, r3, r1
	lsr r3, r3, #8
	strb r3, [r0]
	ldr r3, _0811D924  @ =0x00001734
	add r0, r6, r3
	strb r2, [r0]
	ldr r1, _0811D928  @ =0x00001735
	add r0, r6, r1
	mov r3, r9
	and r2, r2, r3
	lsr r2, r2, #8
	strb r2, [r0]
	mov r0, r8
	ldrb r4, [r0]
	mov r0, sp
	strb r7, [r0]
	add r0, r5, #0
	mov r1, sp
	bl sub_080BFCAC
	mov r1, r8
	strb r4, [r1]
	mov r2, r10
	ldrb r0, [r2]
	cmp r0, #182
	beq _0811D92C
	cmp r0, #188
	beq _0811D92C
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _0811D860
	b _0811D96C
	.byte 0x00
	.byte 0x00
_0811D8F4:
	.4byte gRam
_0811D8F8:
	.4byte 0x0000188B
_0811D8FC:
	.4byte 0x0000187A
_0811D900:
	.4byte 0x00000A74
_0811D904:
	.4byte 0x00000DC5
_0811D908:
	.4byte 0x00000DD9
_0811D90C:
	.4byte gUnknown_0817F9F0
_0811D910:
	.4byte gUnknown_03002B90
_0811D914:
	.4byte 0x00000DCF
_0811D918:
	.4byte gUnknown_0817FA08
_0811D91C:
	.4byte gUnknown_03002B94
_0811D920:
	.4byte 0x00001732
_0811D924:
	.4byte 0x00001734
_0811D928:
	.4byte 0x00001735
_0811D92C:
	ldr r2, _0811D97C  @ =gRam
	ldr r3, _0811D980  @ =0x00000DC5
	add r0, r2, r3
	add r0, r5, r0
	ldr r3, _0811D984  @ =0x00001732
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811D988  @ =0x00000DD9
	add r0, r2, r1
	add r0, r5, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811D98C  @ =0x00000DCF
	add r0, r2, r1
	add r0, r5, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811D990  @ =0x00000DE3
	add r0, r2, r1
	add r0, r5, r0
	add r3, r3, #1
	add r2, r2, r3
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r5, #0
	bl sub_0811F6F8
_0811D96C:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811D97C:
	.4byte gRam
_0811D980:
	.4byte 0x00000DC5
_0811D984:
	.4byte 0x00001732
_0811D988:
	.4byte 0x00000DD9
_0811D98C:
	.4byte 0x00000DCF
_0811D990:
	.4byte 0x00000DE3
	THUMB_FUNC_END sub_0811D828

