	THUMB_FUNC_START sub_0810FB58
sub_0810FB58: @ 0x0810FB58
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810FBD0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0810FBB4
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810FBB4
	ldr r1, _0810FBBC  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r6, _0810FBC0  @ =gRam
	ldr r1, _0810FBC4  @ =0x00000546
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0810FBB4
	bl sub_08093078
	ldr r1, _0810FBC8  @ =0x00001776
	add r0, r6, r1
	strb r5, [r0]
	mov r0, #13
	bl sub_080A1588
	ldr r1, _0810FBCC  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
_0810FBB4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FBBC:
	.4byte gUnknown_03003E70
_0810FBC0:
	.4byte gRam
_0810FBC4:
	.4byte 0x00000546
_0810FBC8:
	.4byte 0x00001776
_0810FBCC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810FB58

