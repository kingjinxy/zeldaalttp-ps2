	THUMB_FUNC_START sub_08071144
sub_08071144: @ 0x08071144
	push {lr}
	bl sub_0809E034
	ldr r2, _0807116C  @ =gRam
	ldr r0, _08071170  @ =0x00000B0C
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08071166
	ldr r0, _08071174  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08071166:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807116C:
	.4byte gRam
_08071170:
	.4byte 0x00000B0C
_08071174:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071144

