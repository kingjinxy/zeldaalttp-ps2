	THUMB_FUNC_START sub_080BB15C
sub_080BB15C: @ 0x080BB15C
	push {r4-r7,lr}
	mov r5, #0
	mov r2, #128
	mov r7, #192
	lsl r7, r7, #7
	ldr r0, _080BB190  @ =gRam
	ldr r3, _080BB194  @ =0x000009AD
	add r1, r0, r3
	ldrb r1, [r1]
	lsr r3, r1, #1
	add r4, r0, #0
	cmp r3, #19
	bhi _080BB204
	ldr r6, _080BB198  @ =0x0000098E
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bls _080BB186
	b _080BB264
_080BB186:
	lsl r0, r0, #2
	ldr r1, _080BB19C  @ =0x080BB1A0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080BB190:
	.4byte gRam
_080BB194:
	.4byte 0x000009AD
_080BB198:
	.4byte 0x0000098E
_080BB19C:
	.4byte _080BB19C+0x4
	.4byte _080BB1BC
	.4byte _080BB1C8
	.4byte _080BB1C8
	.4byte _080BB1D4
	.4byte _080BB1E0
	.4byte _080BB1EC
	.4byte _080BB1F8
_080BB1BC:
	ldr r1, _080BB1C4  @ =gUnknown_08195F18
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB1C4:
	.4byte gUnknown_08195F18
_080BB1C8:
	ldr r1, _080BB1D0  @ =gUnknown_081965D4
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB1D0:
	.4byte gUnknown_081965D4
_080BB1D4:
	ldr r1, _080BB1DC  @ =gUnknown_08198BA0
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB1DC:
	.4byte gUnknown_08198BA0
_080BB1E0:
	ldr r1, _080BB1E8  @ =gUnknown_08198BC4
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB1E8:
	.4byte gUnknown_08198BC4
_080BB1EC:
	ldr r1, _080BB1F4  @ =gUnknown_08198BE8
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB1F4:
	.4byte gUnknown_08198BE8
_080BB1F8:
	ldr r1, _080BB200  @ =gUnknown_08198C0C
	lsl r0, r3, #2
	b _080BB260
	.byte 0x00
	.byte 0x00
_080BB200:
	.4byte gUnknown_08198C0C
_080BB204:
	ldr r1, _080BB21C  @ =0x0000098E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bhi _080BB258
	lsl r0, r0, #2
	ldr r1, _080BB220  @ =0x080BB224
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080BB21C:
	.4byte 0x0000098E
_080BB220:
	.4byte _080BB220+0x4
	.4byte _080BB258
	.4byte _080BB240
	.4byte _080BB240
	.4byte _080BB258
	.4byte _080BB258
	.4byte _080BB248
	.4byte _080BB250
_080BB240:
	ldr r1, _080BB244  @ =gUnknown_08197DA0
	b _080BB25A
_080BB244:
	.4byte gUnknown_08197DA0
_080BB248:
	ldr r1, _080BB24C  @ =gUnknown_08198BFC
	b _080BB25A
_080BB24C:
	.4byte gUnknown_08198BFC
_080BB250:
	ldr r1, _080BB254  @ =gUnknown_08198C20
	b _080BB25A
_080BB254:
	.4byte gUnknown_08198C20
_080BB258:
	ldr r1, _080BB27C  @ =gUnknown_08195F2C
_080BB25A:
	add r0, r3, #0
	sub r0, r0, #20
	lsl r0, r0, #2
_080BB260:
	add r0, r0, r1
	ldr r5, [r0]
_080BB264:
	ldr r3, _080BB280  @ =0x0000098E
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bhi _080BB2BA
	lsl r0, r0, #2
	ldr r1, _080BB284  @ =0x080BB288
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080BB27C:
	.4byte gUnknown_08195F2C
_080BB280:
	.4byte 0x0000098E
_080BB284:
	.4byte _080BB284+0x4
	.4byte _080BB2A4
	.4byte _080BB2AC
	.4byte _080BB2AC
	.4byte _080BB2B4
	.4byte _080BB2B4
	.4byte _080BB2B4
	.4byte _080BB2B4
_080BB2A4:
	mov r2, #128
	mov r7, #192
	lsl r7, r7, #7
	b _080BB2BA
_080BB2AC:
	mov r2, #0
	mov r7, #192
	lsl r7, r7, #7
	b _080BB2BA
_080BB2B4:
	mov r2, #32
	mov r7, #240
	lsl r7, r7, #7
_080BB2BA:
	ldr r1, _080BB330  @ =gUnknown_02000400
	mov r6, #128
	lsl r6, r6, #8
	add r0, r6, #0
	strh r0, [r1, #2]
	ldr r3, _080BB334  @ =0x000042A0
	add r0, r3, #0
	strh r0, [r1, #4]
	strh r2, [r1, #6]
	mov r3, #4
	ldrh r0, [r5]
	ldr r1, _080BB338  @ =0x0000FFFF
	cmp r0, r1
	beq _080BB31E
	mov r12, r1
	ldr r4, _080BB33C  @ =gUnknown_02000408
_080BB2DA:
	ldrh r0, [r5]
	sub r0, r0, r7
	lsl r0, r0, #1
	mov r6, #253
	lsl r6, r6, #7
	add r0, r0, r6
	strh r0, [r4]
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r5]
	add r0, r0, #1
	asr r0, r0, #1
	strh r0, [r4]
	ldrh r2, [r4]
	add r4, r4, #2
	add r3, r3, #2
	add r5, r5, #2
	add r2, r2, r3
	cmp r3, r2
	bcs _080BB318
	lsl r0, r3, #1
	ldr r6, _080BB330  @ =gUnknown_02000400
	add r1, r0, r6
_080BB308:
	ldrh r0, [r5]
	strh r0, [r1]
	add r1, r1, #2
	add r4, r4, #2
	add r3, r3, #1
	add r5, r5, #2
	cmp r3, r2
	bcc _080BB308
_080BB318:
	ldrh r0, [r5]
	cmp r0, r12
	bne _080BB2DA
_080BB31E:
	lsl r0, r3, #1
	ldr r1, _080BB330  @ =gUnknown_02000400
	add r0, r0, r1
	ldr r2, _080BB338  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_080BB330:
	.4byte gUnknown_02000400
_080BB334:
	.4byte 0x000042A0
_080BB338:
	.4byte 0x0000FFFF
_080BB33C:
	.4byte gUnknown_02000408
	THUMB_FUNC_END sub_080BB15C

