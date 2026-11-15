	THUMB_FUNC_START sub_080B6564
sub_080B6564: @ 0x080B6564
	push {r4,r5,lr}
	ldr r1, _080B65B8  @ =gRam
	ldr r0, _080B65BC  @ =0x000009CE
	add r2, r1, r0
	mov r3, #0
	mov r0, #9
	strb r0, [r2]
	ldr r0, _080B65C0  @ =0x000009B4
	add r2, r1, r0
	mov r0, #23
	strb r0, [r2]
	ldr r0, _080B65C4  @ =0x000009B5
	add r1, r1, r0
	strb r3, [r1]
	mov r4, #0
	ldr r5, _080B65C8  @ =0x000007FF
_080B6584:
	ldr r0, _080B65CC  @ =0x0600A000
	add r1, r4, r0
	ldr r0, _080B65D0  @ =gUnknown_0816FF90
	mov r2, #64
	bl CpuFastSet
	mov r0, #128
	lsl r0, r0, #1
	add r4, r4, r0
	cmp r4, r5
	ble _080B6584
	mov r4, #0
	ldr r5, _080B65C8  @ =0x000007FF
_080B659E:
	ldr r0, _080B65D4  @ =0x0600C000
	add r1, r4, r0
	ldr r0, _080B65D8  @ =gUnknown_08170090
	mov r2, #32
	bl CpuFastSet
	add r4, r4, #128
	cmp r4, r5
	ble _080B659E
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B65B8:
	.4byte gRam
_080B65BC:
	.4byte 0x000009CE
_080B65C0:
	.4byte 0x000009B4
_080B65C4:
	.4byte 0x000009B5
_080B65C8:
	.4byte 0x000007FF
_080B65CC:
	.4byte 0x0600A000
_080B65D0:
	.4byte gUnknown_0816FF90
_080B65D4:
	.4byte 0x0600C000
_080B65D8:
	.4byte gUnknown_08170090
	THUMB_FUNC_END sub_080B6564

