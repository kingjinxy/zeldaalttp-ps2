	THUMB_FUNC_START sub_080A1500
sub_080A1500: @ 0x080A1500
	push {r4,r5,lr}
	ldr r5, _080A1564  @ =gRam
	ldr r1, _080A1568  @ =0x000016D5
	add r0, r5, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _080A155C
	bl sub_08092E50
	ldr r0, _080A156C  @ =0x00001808
	add r2, r5, r0
	mov r1, #2
	mov r0, #2
	strb r0, [r2]
	ldr r0, _080A1570  @ =0x00001705
	add r2, r5, r0
	ldrb r0, [r2]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080A1574  @ =0x000016D4
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _080A1578  @ =0x00001793
	add r0, r5, r2
	strb r4, [r0]
	ldr r0, _080A157C  @ =gUnknown_08168C61
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080A1580  @ =0x00001796
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #124
	add r1, r5, r2
	mov r0, #29
	strb r0, [r1]
	ldr r1, _080A1584  @ =0x000016CD
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #74
	add r0, r5, r2
	strb r4, [r0]
	add r1, r1, #27
	add r0, r5, r1
	strb r4, [r0]
_080A155C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A1564:
	.4byte gRam
_080A1568:
	.4byte 0x000016D5
_080A156C:
	.4byte 0x00001808
_080A1570:
	.4byte 0x00001705
_080A1574:
	.4byte 0x000016D4
_080A1578:
	.4byte 0x00001793
_080A157C:
	.4byte gUnknown_08168C61
_080A1580:
	.4byte 0x00001796
_080A1584:
	.4byte 0x000016CD
	THUMB_FUNC_END sub_080A1500

