	THUMB_FUNC_START sub_0806C124
sub_0806C124: @ 0x0806C124
	push {r4,lr}
	ldr r4, _0806C160  @ =gRam
	ldr r1, _0806C164  @ =0x00000CF8
	add r0, r4, r1
	mov r1, #0
	strh r1, [r0]
	ldr r2, _0806C168  @ =0x00000CFA
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #56
	bl sub_080AF4FC
	bl sub_080AA7C8
	ldr r0, _0806C16C  @ =0x000009AC
	add r1, r4, r0
	mov r0, #21
	strb r0, [r1]
	ldr r2, _0806C170  @ =0x000009AD
	add r1, r4, r2
	mov r0, #5
	strb r0, [r1]
	ldr r0, _0806C174  @ =0x000009E8
	add r4, r4, r0
	mov r0, #24
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C160:
	.4byte gRam
_0806C164:
	.4byte 0x00000CF8
_0806C168:
	.4byte 0x00000CFA
_0806C16C:
	.4byte 0x000009AC
_0806C170:
	.4byte 0x000009AD
_0806C174:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C124

