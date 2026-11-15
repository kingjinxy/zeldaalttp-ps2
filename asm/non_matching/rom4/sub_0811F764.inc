	THUMB_FUNC_START sub_0811F764
sub_0811F764: @ 0x0811F764
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r9, r2
	ldr r4, _0811F848  @ =gRam
	ldr r0, _0811F84C  @ =0x00001844
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811F78A
	b _0811F972
_0811F78A:
	ldr r1, _0811F850  @ =0x00000E15
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r5, _0811F854  @ =0x00000DC5
	add r0, r4, r5
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _0811F858  @ =0x00001732
	add r6, r4, r1
	strb r0, [r6]
	add r5, r5, #20
	add r0, r4, r5
	add r0, r2, r0
	ldrb r0, [r0]
	add r1, r1, #1
	add r1, r1, r4
	mov r10, r1
	strb r0, [r1]
	sub r5, r5, #10
	add r0, r4, r5
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _0811F85C  @ =0x00001734
	add r7, r4, r1
	strb r0, [r7]
	add r5, r5, #20
	add r0, r4, r5
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _0811F860  @ =gUnknown_03003965
	strb r0, [r1]
	add r5, r5, #100
	add r0, r4, r5
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _0811F864  @ =0x000009F6
	add r1, r1, r4
	mov r8, r1
	strh r0, [r1]
	mov r0, #237
	add r1, r2, #0
	bl sub_080CA538
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r12, r2
	asr r5, r0, #24
	cmp r5, #0
	bge _0811F7F2
	b _0811F96C
_0811F7F2:
	ldr r0, _0811F868  @ =0x00001783
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r2, _0811F86C  @ =0x00000ED2
	add r1, r4, r2
	add r1, r5, r1
	ldrb r3, [r6]
	mov r2, #248
	add r0, r2, #0
	and r0, r0, r3
	mov r3, #4
	orr r0, r0, r3
	strb r0, [r1]
	strb r0, [r6]
	ldr r6, _0811F870  @ =0x00000EF2
	add r0, r4, r6
	add r0, r5, r0
	mov r6, r10
	ldrb r1, [r6]
	strb r1, [r0]
	ldr r1, _0811F874  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r7]
	and r2, r2, r1
	orr r2, r2, r3
	strb r2, [r0]
	strb r2, [r7]
	ldr r2, _0811F878  @ =0x00000F02
	add r0, r4, r2
	add r0, r5, r0
	ldr r5, _0811F860  @ =gUnknown_03003965
	ldrb r1, [r5]
	strb r1, [r0]
	mov r6, r8
	ldrh r2, [r6]
	cmp r2, #0
	bne _0811F880
	ldr r1, _0811F87C  @ =0x0000096C
	add r0, r4, r1
	strh r2, [r0]
	b _0811F88A
_0811F848:
	.4byte gRam
_0811F84C:
	.4byte 0x00001844
_0811F850:
	.4byte 0x00000E15
_0811F854:
	.4byte 0x00000DC5
_0811F858:
	.4byte 0x00001732
_0811F85C:
	.4byte 0x00001734
_0811F860:
	.4byte gUnknown_03003965
_0811F864:
	.4byte 0x000009F6
_0811F868:
	.4byte 0x00001783
_0811F86C:
	.4byte 0x00000ED2
_0811F870:
	.4byte 0x00000EF2
_0811F874:
	.4byte 0x00000EE2
_0811F878:
	.4byte 0x00000F02
_0811F87C:
	.4byte 0x0000096C
_0811F880:
	ldr r2, _0811F938  @ =0x0000096C
	add r1, r4, r2
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r1]
_0811F88A:
	ldr r3, _0811F93C  @ =gRam
	ldr r4, _0811F940  @ =0x00001734
	add r0, r3, r4
	ldrb r2, [r0]
	ldr r5, _0811F944  @ =0x00001735
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _0811F948  @ =0x000001FF
	and r2, r2, r0
	asr r2, r2, #3
	ldr r6, _0811F94C  @ =0x00000968
	add r0, r3, r6
	mov r4, #0
	strh r2, [r0]
	ldr r1, _0811F950  @ =0x00001732
	add r0, r3, r1
	ldrb r1, [r0]
	sub r5, r5, #2
	add r0, r3, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r6, #252
	lsl r6, r6, #1
	add r0, r6, #0
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0811F938  @ =0x0000096C
	add r5, r3, r0
	orr r2, r2, r1
	ldrh r1, [r5]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	strh r4, [r5]
	ldr r4, _0811F954  @ =gUnknown_0200CB60
	add r0, r2, r4
	ldrb r1, [r0]
	mov r4, #240
	add r0, r4, #0
	and r0, r0, r1
	add r6, r3, #0
	cmp r0, #176
	beq _0811F90E
	mov r0, #1
	strh r0, [r5]
	ldr r1, _0811F958  @ =gUnknown_0200CBE0
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #176
	beq _0811F90E
	mov r0, #2
	strh r0, [r5]
	ldr r1, _0811F95C  @ =gUnknown_0200CB9F
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #176
	beq _0811F90E
	mov r0, #3
	strh r0, [r5]
_0811F90E:
	mov r2, r12
	lsl r1, r2, #24
	asr r1, r1, #24
	ldr r4, _0811F960  @ =0x00000FB2
	add r2, r6, r4
	add r2, r1, r2
	ldr r3, _0811F964  @ =gUnknown_0817FC2E
	ldr r5, _0811F938  @ =0x0000096C
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r3
	ldrb r0, [r0]
	mov r3, #0
	strb r0, [r2]
	ldr r2, _0811F968  @ =0x000010F2
	add r0, r6, r2
	add r1, r1, r0
	strb r3, [r1]
	b _0811F972
_0811F938:
	.4byte 0x0000096C
_0811F93C:
	.4byte gRam
_0811F940:
	.4byte 0x00001734
_0811F944:
	.4byte 0x00001735
_0811F948:
	.4byte 0x000001FF
_0811F94C:
	.4byte 0x00000968
_0811F950:
	.4byte 0x00001732
_0811F954:
	.4byte gUnknown_0200CB60
_0811F958:
	.4byte gUnknown_0200CBE0
_0811F95C:
	.4byte gUnknown_0200CB9F
_0811F960:
	.4byte 0x00000FB2
_0811F964:
	.4byte gUnknown_0817FC2E
_0811F968:
	.4byte 0x000010F2
_0811F96C:
	mov r0, r9
	bl sub_0811E4BC
_0811F972:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811F764

