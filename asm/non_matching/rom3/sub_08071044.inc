	THUMB_FUNC_START sub_08071044
sub_08071044: @ 0x08071044
	push {lr}
	bl sub_0809AABC
	ldr r2, _08071074  @ =gRam
	ldr r0, _08071078  @ =0x000009AD
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0807106E
	mov r0, #7
	strb r0, [r1]
	ldr r0, _0807107C  @ =0x000009E8
	add r1, r2, r0
	mov r0, #17
	strh r0, [r1]
	ldr r0, _08071080  @ =0x00000CA2
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_0812FA28
_0807106E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08071074:
	.4byte gRam
_08071078:
	.4byte 0x000009AD
_0807107C:
	.4byte 0x000009E8
_08071080:
	.4byte 0x00000CA2
	THUMB_FUNC_END sub_08071044

