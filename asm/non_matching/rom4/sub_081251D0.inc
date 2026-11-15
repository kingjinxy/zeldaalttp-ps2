	THUMB_FUNC_START sub_081251D0
sub_081251D0: @ 0x081251D0
	push {r4,r5,lr}
	ldr r4, _08125200  @ =gUnknown_02006880
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r1, _08125204  @ =gRam
	ldr r2, _08125208  @ =0x00001885
	add r1, r1, r2
	mov r2, #1
	strb r2, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bne _081251F2
	mov r0, #15
	bl sub_080C1A8C
_081251F2:
	ldrh r0, [r4]
	cmp r0, #14
	bhi _0812520C
	bl sub_08131FA4
	b _08125214
	.byte 0x00
	.byte 0x00
_08125200:
	.4byte gUnknown_02006880
_08125204:
	.4byte gRam
_08125208:
	.4byte 0x00001885
_0812520C:
	cmp r0, #29
	bhi _08125214
	bl sub_08132344
_08125214:
	ldr r2, _08125284  @ =gUnknown_02006880
	ldrh r0, [r2]
	cmp r0, #50
	bne _08125226
	ldr r0, _08125288  @ =gRam
	ldr r1, _0812528C  @ =0x00000A3C
	add r0, r0, r1
	mov r1, #31
	strh r1, [r0]
_08125226:
	ldrh r1, [r2]
	ldr r0, _08125290  @ =0x00000225
	cmp r1, r0
	bls _0812527C
	bl sub_08069F08
	ldr r3, _08125288  @ =gRam
	ldr r2, _08125294  @ =0x0000099D
	add r5, r3, r2
	mov r4, #0
	ldrsb r4, [r5, r4]
	cmp r4, #0
	bne _0812527C
	ldr r1, _08125298  @ =0x00001770
	add r0, r3, r1
	strb r4, [r0]
	add r2, r2, #15
	add r1, r3, r2
	mov r0, #26
	strb r0, [r1]
	ldr r0, _0812529C  @ =0x000009AD
	add r1, r3, r0
	mov r0, #40
	strb r0, [r1]
	ldr r1, _081252A0  @ =0x000009E8
	add r0, r3, r1
	mov r2, #0
	strh r4, [r0]
	ldr r0, _081252A4  @ =0x00000A36
	add r1, r3, r0
	mov r0, #255
	strh r0, [r1]
	ldr r1, _081252A8  @ =0x00000A38
	add r0, r3, r1
	strh r4, [r0]
	ldr r1, _081252AC  @ =0x00001B16
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _081252B0  @ =0x0000165C
	add r1, r3, r0
	mov r0, #64
	strh r0, [r1]
	strb r2, [r5]
_0812527C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125284:
	.4byte gUnknown_02006880
_08125288:
	.4byte gRam
_0812528C:
	.4byte 0x00000A3C
_08125290:
	.4byte 0x00000225
_08125294:
	.4byte 0x0000099D
_08125298:
	.4byte 0x00001770
_0812529C:
	.4byte 0x000009AD
_081252A0:
	.4byte 0x000009E8
_081252A4:
	.4byte 0x00000A36
_081252A8:
	.4byte 0x00000A38
_081252AC:
	.4byte 0x00001B16
_081252B0:
	.4byte 0x0000165C
	THUMB_FUNC_END sub_081251D0

