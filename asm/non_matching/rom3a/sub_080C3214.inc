	THUMB_FUNC_START sub_080C3214
sub_080C3214: @ 0x080C3214
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _080C3250  @ =gRam
	ldr r2, _080C3254  @ =0x000009AC
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #14
	bne _080C3228
	b _080C3344
_080C3228:
	ldr r3, _080C3258  @ =0x00001716
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #2
	beq _080C32B2
	ldr r2, _080C325C  @ =0x00001702
	add r0, r1, r2
	ldrb r3, [r0]
	mov r0, #1
	and r3, r3, r0
	ldr r2, _080C3260  @ =0x0000180D
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3268
	ldr r2, _080C3264  @ =0x000016F8
	add r0, r1, r2
	ldrb r2, [r0]
	orr r2, r2, r3
	b _080C326C
_080C3250:
	.4byte gRam
_080C3254:
	.4byte 0x000009AC
_080C3258:
	.4byte 0x00001716
_080C325C:
	.4byte 0x00001702
_080C3260:
	.4byte 0x0000180D
_080C3264:
	.4byte 0x000016F8
_080C3268:
	lsl r0, r3, #24
	lsr r2, r0, #24
_080C326C:
	ldr r3, _080C334C  @ =0x000017D4
	add r0, r1, r3
	ldrb r0, [r0]
	add r3, r0, #0
	orr r3, r3, r2
	ldr r2, _080C3350  @ =0x0000176C
	add r0, r1, r2
	ldrb r0, [r0]
	orr r3, r3, r0
	sub r2, r2, #13
	add r0, r1, r2
	ldrb r0, [r0]
	orr r3, r3, r0
	cmp r3, #0
	bne _080C32B2
	ldr r3, _080C3354  @ =0x0000140C
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _080C3344
	ldr r2, _080C3358  @ =0x00000547
	add r0, r1, r2
	sub r2, r2, #1
	add r3, r1, r2
	ldrb r0, [r0]
	ldrb r2, [r3]
	orr r0, r0, r2
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C3344
	mov r0, #127
	and r0, r0, r2
	strb r0, [r3]
_080C32B2:
	add r0, r7, #0
	mov r1, #11
	bl sub_080CF0AC
	ldr r3, _080C335C  @ =gRam
	ldr r0, _080C3360  @ =0x00001792
	add r1, r3, r0
	mov r6, #0
	mov r0, #2
	strb r0, [r1]
	ldr r2, _080C3364  @ =0x00000FA2
	add r1, r3, r2
	add r1, r7, r1
	ldr r2, _080C3368  @ =0x0000141C
	add r0, r3, r2
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080C336C  @ =0x00001152
	add r5, r3, r0
	add r5, r7, r5
	strb r6, [r5]
	ldr r1, _080C3354  @ =0x0000140C
	add r0, r3, r1
	add r0, r7, r0
	strb r6, [r0]
	ldr r1, _080C3370  @ =gUnknown_0822788F
	ldr r2, _080C3374  @ =0x00000FF2
	add r0, r3, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r2, #16
	and r2, r2, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _080C3378  @ =0x00001032
	add r1, r3, r0
	add r1, r7, r1
	ldrb r4, [r1]
	mov r0, #239
	and r0, r0, r4
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080C337C  @ =0x000016D5
	add r0, r3, r1
	ldrb r2, [r0]
	lsr r2, r2, #1
	ldr r0, _080C3380  @ =0x00000F22
	add r1, r3, r0
	add r1, r7, r1
	ldr r0, _080C3384  @ =gUnknown_08171E51
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080C3388  @ =0x00000F12
	add r1, r3, r0
	add r1, r7, r1
	ldr r0, _080C338C  @ =gUnknown_08171E55
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080C3390  @ =gUnknown_08171E59
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r5]
	ldr r1, _080C3394  @ =0x000010E2
	add r3, r3, r1
	add r3, r7, r3
	strb r6, [r3]
_080C3344:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C334C:
	.4byte 0x000017D4
_080C3350:
	.4byte 0x0000176C
_080C3354:
	.4byte 0x0000140C
_080C3358:
	.4byte 0x00000547
_080C335C:
	.4byte gRam
_080C3360:
	.4byte 0x00001792
_080C3364:
	.4byte 0x00000FA2
_080C3368:
	.4byte 0x0000141C
_080C336C:
	.4byte 0x00001152
_080C3370:
	.4byte gUnknown_0822788F
_080C3374:
	.4byte 0x00000FF2
_080C3378:
	.4byte 0x00001032
_080C337C:
	.4byte 0x000016D5
_080C3380:
	.4byte 0x00000F22
_080C3384:
	.4byte gUnknown_08171E51
_080C3388:
	.4byte 0x00000F12
_080C338C:
	.4byte gUnknown_08171E55
_080C3390:
	.4byte gUnknown_08171E59
_080C3394:
	.4byte 0x000010E2
	THUMB_FUNC_END sub_080C3214
