	THUMB_FUNC_START sub_0812F300
sub_0812F300: @ 0x0812F300
	push {r4,r5,lr}
	ldr r5, _0812F37C  @ =gRam
	ldr r1, _0812F380  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #21
	bne _0812F376
	bl sub_08076C48
	ldr r4, _0812F384  @ =gUnknown_0822B150
	mov r1, #180
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F388  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F388  @ =gUnknown_02032000
	ldr r1, _0812F38C  @ =gUnknown_02009A00
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	mov r1, #182
	lsl r1, r1, #1
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _0812F388  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r0, _0812F388  @ =gUnknown_02032000
	ldr r1, _0812F390  @ =gUnknown_0200A200
	mov r2, #128
	lsl r2, r2, #1
	bl CpuFastSet
	ldr r0, _0812F394  @ =0x00000A3A
	add r1, r5, r0
	mov r4, #0
	mov r0, #224
	lsl r0, r0, #6
	strh r0, [r1]
	bl sub_080AB73C
	ldr r1, _0812F398  @ =0x0000180D
	add r0, r5, r1
	strb r4, [r0]
	ldr r1, _0812F39C  @ =0x000016EA
	add r0, r5, r1
	strb r4, [r0]
	sub r1, r1, #2
	add r0, r5, r1
	strb r4, [r0]
	ldr r1, _0812F3A0  @ =0x00001885
	add r0, r5, r1
	strb r4, [r0]
	ldr r1, _0812F3A4  @ =0x00001770
	add r0, r5, r1
	strb r4, [r0]
_0812F376:
	pop {r4,r5}
	pop {r0}
	bx r0
_0812F37C:
	.4byte gRam
_0812F380:
	.4byte 0x000009AC
_0812F384:
	.4byte gUnknown_0822B150
_0812F388:
	.4byte gUnknown_02032000
_0812F38C:
	.4byte gUnknown_02009A00
_0812F390:
	.4byte gUnknown_0200A200
_0812F394:
	.4byte 0x00000A3A
_0812F398:
	.4byte 0x0000180D
_0812F39C:
	.4byte 0x000016EA
_0812F3A0:
	.4byte 0x00001885
_0812F3A4:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0812F300

