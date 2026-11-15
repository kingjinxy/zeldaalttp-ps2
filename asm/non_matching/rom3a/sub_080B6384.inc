	THUMB_FUNC_START sub_080B6384
sub_080B6384: @ 0x080B6384
	push {r4,r5,lr}
	ldr r4, _080B63E4  @ =gRam
	ldr r1, _080B63E8  @ =0x00000974
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #192
	eor r1, r1, r0
	mov r0, #128
	and r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #23
	ldr r2, _080B63EC  @ =0x00000A66
	add r3, r4, r2
	ldr r0, _080B63F0  @ =gUnknown_0816F0F6
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r5, [r3]
	add r2, r0, r5
	strh r2, [r3]
	ldr r3, _080B63F4  @ =0x000015EC
	add r2, r4, r3
	ldrh r5, [r2]
	add r0, r0, r5
	strh r0, [r2]
	ldr r0, _080B63F8  @ =0x00000958
	add r2, r4, r0
	ldr r0, _080B63FC  @ =gUnknown_0816F0F2
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r2, _080B6400  @ =0x00000A62
	add r1, r4, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r1]
	cmp r0, r1
	bne _080B63DC
	ldr r3, _080B6404  @ =0x00000A5E
	add r1, r4, r3
	mov r0, #0
	strb r0, [r1]
_080B63DC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B63E4:
	.4byte gRam
_080B63E8:
	.4byte 0x00000974
_080B63EC:
	.4byte 0x00000A66
_080B63F0:
	.4byte gUnknown_0816F0F6
_080B63F4:
	.4byte 0x000015EC
_080B63F8:
	.4byte 0x00000958
_080B63FC:
	.4byte gUnknown_0816F0F2
_080B6400:
	.4byte 0x00000A62
_080B6404:
	.4byte 0x00000A5E
	THUMB_FUNC_END sub_080B6384

