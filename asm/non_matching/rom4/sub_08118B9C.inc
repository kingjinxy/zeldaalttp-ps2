	THUMB_FUNC_START sub_08118B9C
sub_08118B9C: @ 0x08118B9C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08118BF4  @ =gRam
	ldr r1, _08118BF8  @ =0x00001832
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _08118BE6
	ldr r1, _08118BFC  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldr r1, _08118C00  @ =gUnknown_0817F34E
	ldrb r0, [r0]
	ldrb r1, [r1, #6]
	cmp r0, r1
	bne _08118BE6
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08118C04  @ =0x00000CA9
	add r1, r5, r0
	mov r0, #4
	strb r0, [r1]
	mov r0, #202
	lsl r0, r0, #4
	add r1, r5, r0
	mov r0, #128
	lsl r0, r0, #2
	strh r0, [r1]
	bl sub_081331F4
	ldr r0, _08118C08  @ =0x0000099B
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08118BE6:
	add r0, r4, #0
	bl sub_08118C0C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08118BF4:
	.4byte gRam
_08118BF8:
	.4byte 0x00001832
_08118BFC:
	.4byte 0x00000E29
_08118C00:
	.4byte gUnknown_0817F34E
_08118C04:
	.4byte 0x00000CA9
_08118C08:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08118B9C

