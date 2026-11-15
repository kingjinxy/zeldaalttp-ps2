	THUMB_FUNC_START sub_080732FC
sub_080732FC: @ 0x080732FC
	push {r4,r5,lr}
	ldr r2, _08073368  @ =0x04000008
	ldrh r1, [r2]
	ldr r0, _0807336C  @ =0x0000FFBF
	and r0, r0, r1
	strh r0, [r2]
	ldr r1, _08073370  @ =gRam
	ldr r2, _08073374  @ =0x00000A42
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _08073378  @ =0x00000A48
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _0807337C  @ =0x000009C6
	add r0, r1, r4
	ldrh r3, [r0]
	add r0, r3, #0
	add r2, r1, #0
	cmp r0, #128
	beq _08073398
	cmp r0, #42
	beq _08073398
	cmp r0, #15
	beq _08073398
	mov r1, #7
	cmp r0, #63
	bls _08073334
	mov r1, #14
_08073334:
	ldr r0, _08073380  @ =0x00000A3C
	add r5, r2, r0
	add r4, r1, #0
	strh r1, [r5]
	mov r0, #63
	and r0, r0, r3
	cmp r0, #0
	bne _08073398
	mov r1, #15
	ldr r3, _08073384  @ =0x0000165C
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _08073392
	ldr r0, _08073388  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08073390
	ldr r1, _0807338C  @ =0x0000FFFF
	add r0, r1, #0
	orr r0, r0, r4
	strh r0, [r5]
	b _08073398
	.byte 0x00
	.byte 0x00
_08073368:
	.4byte 0x04000008
_0807336C:
	.4byte 0x0000FFBF
_08073370:
	.4byte gRam
_08073374:
	.4byte 0x00000A42
_08073378:
	.4byte 0x00000A48
_0807337C:
	.4byte 0x000009C6
_08073380:
	.4byte 0x00000A3C
_08073384:
	.4byte 0x0000165C
_08073388:
	.4byte gUnknown_02002300
_0807338C:
	.4byte 0x0000FFFF
_08073390:
	mov r1, #11
_08073392:
	ldr r3, _080733C8  @ =0x00000A3C
	add r0, r2, r3
	strh r1, [r0]
_08073398:
	ldr r4, _080733CC  @ =0x000009AD
	add r3, r2, r4
	mov r1, #0
	mov r0, #8
	strb r0, [r3]
	add r4, r4, #59
	add r0, r2, r4
	strh r1, [r0]
	ldr r0, _080733D0  @ =0x000009AC
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #11
	bne _080733C2
	mov r0, #9
	strb r0, [r1]
	mov r0, #31
	strb r0, [r3]
	ldr r3, _080733D4  @ =0x00000C0C
	add r1, r2, r3
	mov r0, #12
	strh r0, [r1]
_080733C2:
	pop {r4,r5}
	pop {r0}
	bx r0
_080733C8:
	.4byte 0x00000A3C
_080733CC:
	.4byte 0x000009AD
_080733D0:
	.4byte 0x000009AC
_080733D4:
	.4byte 0x00000C0C
	THUMB_FUNC_END sub_080732FC

