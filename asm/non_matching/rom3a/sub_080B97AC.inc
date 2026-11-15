	THUMB_FUNC_START sub_080B97AC
sub_080B97AC: @ 0x080B97AC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r0, #1
	ldr r4, _080B9830  @ =gRam
	ldr r1, _080B9834  @ =0x00001122
	add r1, r1, r4
	mov r8, r1
	ldr r2, _080B9838  @ =0x00000FF2
	add r2, r2, r4
	mov r12, r2
	ldr r1, _080B983C  @ =0x00001032
	add r7, r4, r1
	mov r6, #57
	ldr r2, _080B9840  @ =0x00001012
	add r5, r4, r2
_080B97D4:
	lsl r1, r0, #24
	asr r1, r1, #24
	add r3, r1, #3
	mov r2, r8
	add r0, r3, r2
	strb r6, [r0]
	mov r0, r12
	add r2, r3, r0
	mov r0, #11
	strb r0, [r2]
	add r2, r3, r7
	mov r0, #16
	strb r0, [r2]
	add r3, r3, r5
	mov r2, #1
	strb r2, [r3]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r1, #0
	bge _080B97D4
	ldr r0, _080B9844  @ =0x00000FF7
	add r1, r4, r0
	mov r0, #42
	strb r0, [r1]
	ldr r0, _080B9848  @ =0x00000FF8
	add r1, r4, r0
	mov r0, #121
	strb r0, [r1]
	ldr r1, _080B984C  @ =0x00000F58
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080B9850  @ =0x00001148
	add r1, r4, r2
	mov r0, #5
	strb r0, [r1]
	mov r0, r9
	bl sub_080B9454
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B9830:
	.4byte gRam
_080B9834:
	.4byte 0x00001122
_080B9838:
	.4byte 0x00000FF2
_080B983C:
	.4byte 0x00001032
_080B9840:
	.4byte 0x00001012
_080B9844:
	.4byte 0x00000FF7
_080B9848:
	.4byte 0x00000FF8
_080B984C:
	.4byte 0x00000F58
_080B9850:
	.4byte 0x00001148
	THUMB_FUNC_END sub_080B97AC

