	THUMB_FUNC_START sub_08131D74
sub_08131D74: @ 0x08131D74
	push {lr}
	ldr r1, _08131DB0  @ =gRam
	ldr r0, _08131DB4  @ =0x000009B5
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r0, _08131DB8  @ =0x000009D4
	add r2, r1, r0
	mov r0, #48
	strb r0, [r2]
	ldr r0, _08131DBC  @ =0x0000051E
	add r2, r1, r0
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r2]
	ldr r0, _08131DC0  @ =0x0000051A
	add r2, r1, r0
	mov r0, #63
	strh r0, [r2]
	ldr r2, _08131DC4  @ =0x00000998
	add r0, r1, r2
	mov r2, #15
	strb r2, [r0]
	ldr r0, _08131DC8  @ =0x00000999
	add r1, r1, r0
	strb r2, [r1]
	bl sub_08131DCC
	pop {r0}
	bx r0
_08131DB0:
	.4byte gRam
_08131DB4:
	.4byte 0x000009B5
_08131DB8:
	.4byte 0x000009D4
_08131DBC:
	.4byte 0x0000051E
_08131DC0:
	.4byte 0x0000051A
_08131DC4:
	.4byte 0x00000998
_08131DC8:
	.4byte 0x00000999
	THUMB_FUNC_END sub_08131D74

