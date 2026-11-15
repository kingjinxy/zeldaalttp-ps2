	THUMB_FUNC_START sub_08132CC4
sub_08132CC4: @ 0x08132CC4
	push {lr}
	ldr r2, _08132CF4  @ =gRam
	ldr r0, _08132CF8  @ =0x00000CF8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _08132CF0
	mov r0, #0
	strh r0, [r1]
	ldr r0, _08132CFC  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _08132D00  @ =0x00000D02
	add r1, r2, r0
	mov r0, #15
	strh r0, [r1]
_08132CF0:
	pop {r0}
	bx r0
_08132CF4:
	.4byte gRam
_08132CF8:
	.4byte 0x00000CF8
_08132CFC:
	.4byte 0x000009E8
_08132D00:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_08132CC4

