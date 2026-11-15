	THUMB_FUNC_START sub_080A173C
sub_080A173C: @ 0x080A173C
	push {r4,lr}
	ldr r1, _080A17AC  @ =gRam
	ldr r0, _080A17B0  @ =0x000009AD
	add r2, r1, r0
	mov r0, #5
	strb r0, [r2]
	ldr r2, _080A17B4  @ =0x000009AC
	add r3, r1, r2
	ldrb r2, [r3]
	ldr r4, _080A17B8  @ =0x00000A1A
	add r0, r1, r4
	mov r4, #0
	strh r2, [r0]
	mov r0, #14
	strb r0, [r3]
	ldr r0, _080A17BC  @ =0x00001605
	add r2, r1, r0
	mov r3, #1
	mov r0, #1
	strb r0, [r2]
	ldr r0, _080A17C0  @ =0x00001794
	add r2, r1, r0
	mov r0, #22
	strb r0, [r2]
	ldr r2, _080A17C4  @ =0x00001793
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _080A17C8  @ =0x00001791
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r0, _080A17CC  @ =0x00001705
	add r2, r1, r0
	ldrb r0, [r2]
	orr r3, r3, r0
	strb r3, [r2]
	ldr r2, _080A17D0  @ =0x000016D4
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _080A17D4  @ =0x00001727
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #240
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080A17D8  @ =0x00000A3E
	add r0, r1, r2
	strb r4, [r0]
	ldr r4, _080A17DC  @ =0x00000A3C
	add r1, r1, r4
	ldr r0, _080A17E0  @ =0x0000FFF2
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A17AC:
	.4byte gRam
_080A17B0:
	.4byte 0x000009AD
_080A17B4:
	.4byte 0x000009AC
_080A17B8:
	.4byte 0x00000A1A
_080A17BC:
	.4byte 0x00001605
_080A17C0:
	.4byte 0x00001794
_080A17C4:
	.4byte 0x00001793
_080A17C8:
	.4byte 0x00001791
_080A17CC:
	.4byte 0x00001705
_080A17D0:
	.4byte 0x000016D4
_080A17D4:
	.4byte 0x00001727
_080A17D8:
	.4byte 0x00000A3E
_080A17DC:
	.4byte 0x00000A3C
_080A17E0:
	.4byte 0x0000FFF2
	THUMB_FUNC_END sub_080A173C

