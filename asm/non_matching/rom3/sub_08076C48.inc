	THUMB_FUNC_START sub_08076C48
sub_08076C48: @ 0x08076C48
	push {r4,lr}
	ldr r1, _08076CBC  @ =0x04000008
	ldr r2, _08076CC0  @ =0x0000F004
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08076CC4  @ =gRam
	ldr r0, _08076CC8  @ =0x00000514
	add r2, r1, r0
	mov r4, #0
	mov r3, #0
	ldr r0, _08076CCC  @ =0x0000F441
	strh r0, [r2]
	ldr r0, _08076CD0  @ =0x00000516
	add r2, r1, r0
	ldr r0, _08076CD4  @ =0x0000F842
	strh r0, [r2]
	mov r0, #163
	lsl r0, r0, #3
	add r2, r1, r0
	ldr r0, _08076CD8  @ =0x0000FC43
	strh r0, [r2]
	ldr r0, _08076CDC  @ =0x0000050C
	add r2, r1, r0
	mov r0, #252
	lsl r0, r0, #6
	strh r0, [r2]
	ldr r0, _08076CE0  @ =0x0000051A
	add r2, r1, r0
	mov r0, #63
	strh r0, [r2]
	ldr r2, _08076CE4  @ =0x000009B2
	add r0, r1, r2
	strb r4, [r0]
	ldr r2, _08076CE8  @ =0x00001651
	add r0, r1, r2
	strb r4, [r0]
	mov r2, #176
	lsl r2, r2, #4
	add r0, r1, r2
	strh r3, [r0]
	ldr r2, _08076CEC  @ =0x00000D08
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _08076CF0  @ =0x00000AB2
	add r2, r1, r0
	ldr r0, _08076CF4  @ =0x0000FFFF
	strh r0, [r2]
	ldr r2, _08076CF8  @ =0x00000B54
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _08076CFC  @ =0x00000B52
	add r1, r1, r0
	ldrh r0, [r1]
	cmp r0, #0
	bne _08076D00
	bl sub_08076694
	b _08076D04
_08076CBC:
	.4byte 0x04000008
_08076CC0:
	.4byte 0x0000F004
_08076CC4:
	.4byte gRam
_08076CC8:
	.4byte 0x00000514
_08076CCC:
	.4byte 0x0000F441
_08076CD0:
	.4byte 0x00000516
_08076CD4:
	.4byte 0x0000F842
_08076CD8:
	.4byte 0x0000FC43
_08076CDC:
	.4byte 0x0000050C
_08076CE0:
	.4byte 0x0000051A
_08076CE4:
	.4byte 0x000009B2
_08076CE8:
	.4byte 0x00001651
_08076CEC:
	.4byte 0x00000D08
_08076CF0:
	.4byte 0x00000AB2
_08076CF4:
	.4byte 0x0000FFFF
_08076CF8:
	.4byte 0x00000B54
_08076CFC:
	.4byte 0x00000B52
_08076D00:
	bl sub_08076A38
_08076D04:
	bl sub_08076D10
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08076C48

	.byte 0x00
	.byte 0x00
