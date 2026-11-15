	THUMB_FUNC_START sub_080D3D24
sub_080D3D24: @ 0x080D3D24
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D3D6C  @ =gRam
	ldr r3, _080D3D70  @ =0x00000F92
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #0
	strb r3, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strh r3, [r1]
	add r4, r4, #4
	add r1, r2, r4
	strh r3, [r1]
	add r4, r4, #4
	add r1, r2, r4
	strh r3, [r1]
	add r4, r4, #4
	add r1, r2, r4
	strh r3, [r1]
	ldr r3, _080D3D74  @ =gUnknown_08174ED4
	ldr r1, _080D3D78  @ =0x00000F62
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r3
	ldrb r1, [r1]
	bl sub_080D3E68
	pop {r4}
	pop {r0}
	bx r0
_080D3D6C:
	.4byte gRam
_080D3D70:
	.4byte 0x00000F92
_080D3D74:
	.4byte gUnknown_08174ED4
_080D3D78:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D3D24

