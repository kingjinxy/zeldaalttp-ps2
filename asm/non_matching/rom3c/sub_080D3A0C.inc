	THUMB_FUNC_START sub_080D3A0C
sub_080D3A0C: @ 0x080D3A0C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080D3A50  @ =gRam
	ldr r1, _080D3A54  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _080D3A58  @ =0x00000F62
	add r4, r6, r1
	add r4, r5, r4
	mov r1, #3
	and r1, r1, r0
	lsl r1, r1, #1
	strb r1, [r4]
	bl sub_080AA868
	ldr r2, _080D3A5C  @ =gUnknown_08174ED4
	ldrb r1, [r4]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	cmp r0, r1
	blt _080D3A64
	ldr r1, _080D3A60  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	b _080D3A70
_080D3A50:
	.4byte gRam
_080D3A54:
	.4byte 0x00000F92
_080D3A58:
	.4byte 0x00000F62
_080D3A5C:
	.4byte gUnknown_08174ED4
_080D3A60:
	.4byte 0x00000F52
_080D3A64:
	ldr r0, _080D3A78  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D3A70:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3A78:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3A0C

