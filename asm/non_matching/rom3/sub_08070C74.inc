	THUMB_FUNC_START sub_08070C74
sub_08070C74: @ 0x08070C74
	push {r4,lr}
	ldr r4, _08070CA4  @ =gRam
	ldr r1, _08070CA8  @ =0x000009AD
	add r2, r4, r1
	mov r1, #5
	strb r1, [r2]
	ldr r1, _08070CAC  @ =0x00000A3C
	add r2, r4, r1
	mov r1, #13
	strh r1, [r2]
	ldr r2, _08070CB0  @ =0x00000A49
	add r1, r4, r2
	strb r0, [r1]
	mov r0, #8
	bl sub_0812A0A0
	ldr r0, _08070CB4  @ =0x0000099E
	add r4, r4, r0
	mov r0, #24
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070CA4:
	.4byte gRam
_08070CA8:
	.4byte 0x000009AD
_08070CAC:
	.4byte 0x00000A3C
_08070CB0:
	.4byte 0x00000A49
_08070CB4:
	.4byte 0x0000099E
	THUMB_FUNC_END sub_08070C74

