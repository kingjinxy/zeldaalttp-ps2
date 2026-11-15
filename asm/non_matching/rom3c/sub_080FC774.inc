	THUMB_FUNC_START sub_080FC774
sub_080FC774: @ 0x080FC774
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _080FC83C  @ =gRam
	ldr r0, _080FC840  @ =0x00001122
	add r1, r2, r0
	add r1, r7, r1
	ldr r3, _080FC844  @ =0x00000D94
	add r0, r2, r3
	add r0, r7, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	eor r1, r1, r0
	mov r0, #48
	and r1, r1, r0
	lsl r1, r1, #8
	mov r8, r1
	ldr r1, _080FC848  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #16
	strh r0, [r1]
	mov r3, #1
	mov r6, #0
	ldr r4, _080FC84C  @ =0x00000964
	add r4, r4, r2
	mov r10, r4
	ldr r0, _080FC850  @ =gUnknown_0817A7DE
	mov r9, r0
_080FC7B6:
	ldr r0, _080FC848  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r6
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080FC854  @ =gUnknown_0817A7DC
	lsl r5, r3, #24
	asr r5, r5, #24
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r2, _080FC858  @ =gUnknown_03002B90
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r3, r10
	ldrh r2, [r3]
	add r2, r2, #20
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080FC85C  @ =gUnknown_02010994
	ldrb r3, [r3]
	lsr r3, r3, #2
	mov r4, #7
	and r3, r3, r4
	add r3, r3, r9
	ldrb r3, [r3]
	ldr r4, _080FC860  @ =gUnknown_0817A7E6
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r5, r5, #1
	lsl r5, r5, #24
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsr r3, r5, #24
	cmp r5, #0
	bge _080FC7B6
	ldr r0, _080FC83C  @ =gRam
	ldr r1, _080FC864  @ =0x000009AD
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FC82C
	add r0, r7, #0
	mov r1, #0
	mov r2, #1
	bl sub_080C6350
_080FC82C:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FC83C:
	.4byte gRam
_080FC840:
	.4byte 0x00001122
_080FC844:
	.4byte 0x00000D94
_080FC848:
	.4byte gUnknown_03003E74
_080FC84C:
	.4byte 0x00000964
_080FC850:
	.4byte gUnknown_0817A7DE
_080FC854:
	.4byte gUnknown_0817A7DC
_080FC858:
	.4byte gUnknown_03002B90
_080FC85C:
	.4byte gUnknown_02010994
_080FC860:
	.4byte gUnknown_0817A7E6
_080FC864:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080FC774

