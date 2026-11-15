	THUMB_FUNC_START sub_080BDB8C
sub_080BDB8C: @ 0x080BDB8C
	push {lr}
	bl sub_08077294
	bl sub_080B85B8
	ldr r1, _080BDBB0  @ =gRam
	ldr r2, _080BDBB4  @ =0x00000A02
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _080BDBB8  @ =0x00000A03
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080BDBBC  @ =0x000009E8
	add r1, r1, r0
	strh r2, [r1]
	pop {r0}
	bx r0
_080BDBB0:
	.4byte gRam
_080BDBB4:
	.4byte 0x00000A02
_080BDBB8:
	.4byte 0x00000A03
_080BDBBC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080BDB8C

