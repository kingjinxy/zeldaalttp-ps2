	THUMB_FUNC_START sub_0807A280
sub_0807A280: @ 0x0807A280
	push {r4-r7,lr}
	ldr r2, _0807A2E0  @ =gRam
	ldr r1, _0807A2E4  @ =0x00000AA8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	add r7, r2, #0
	cmp r0, #0
	bne _0807A298
	b _0807A3B0
_0807A298:
	ldr r2, _0807A2E8  @ =0x00000AB2
	add r0, r7, r2
	ldrh r0, [r0]
	lsr r2, r0, #1
	ldr r3, _0807A2EC  @ =0x0000165C
	add r0, r7, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807A308
	ldr r1, _0807A2F0  @ =gPendantCount
	ldr r0, _0807A2F4  @ =gUnknown_0814CADC
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _0807A3B0
	ldr r0, _0807A2F8  @ =0x00000B6A
	add r1, r7, r0
	mov r6, #0
	mov r0, #128
	strh r0, [r1]
	ldr r1, _0807A2FC  @ =0x0000097C
	add r4, r7, r1
	ldrh r5, [r4]
	ldr r0, _0807A300  @ =gUnknown_08152AAC
	add r0, r2, r0
	ldrb r0, [r0]
	bl sub_080C9600
	strh r5, [r4]
	mov r2, #0
	ldrsh r0, [r4, r2]
	ldr r3, _0807A304  @ =0x000009E6
	add r1, r7, r3
	b _0807A356
_0807A2E0:
	.4byte gRam
_0807A2E4:
	.4byte 0x00000AA8
_0807A2E8:
	.4byte 0x00000AB2
_0807A2EC:
	.4byte 0x0000165C
_0807A2F0:
	.4byte gPendantCount
_0807A2F4:
	.4byte gUnknown_0814CADC
_0807A2F8:
	.4byte 0x00000B6A
_0807A2FC:
	.4byte 0x0000097C
_0807A300:
	.4byte gUnknown_08152AAC
_0807A304:
	.4byte 0x000009E6
_0807A308:
	ldr r1, _0807A35C  @ =0x000009DA
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #205
	beq _0807A378
	cmp r0, #105
	beq _0807A378
	cmp r0, #173
	beq _0807A378
	cmp r0, #236
	beq _0807A378
	cmp r0, #138
	beq _0807A378
	ldr r1, _0807A360  @ =gCrystalCount
	ldr r0, _0807A364  @ =gUnknown_0814CADC
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _0807A3B0
	ldr r3, _0807A368  @ =0x00000B6A
	add r1, r7, r3
	mov r6, #0
	mov r0, #128
	strh r0, [r1]
	ldr r0, _0807A36C  @ =0x0000097C
	add r4, r7, r0
	ldrh r5, [r4]
	ldr r0, _0807A370  @ =gUnknown_08152AAC
	add r0, r2, r0
	ldrb r0, [r0]
	bl sub_080C9600
	strh r5, [r4]
	mov r1, #0
	ldrsh r0, [r4, r1]
	ldr r2, _0807A374  @ =0x000009E6
	add r1, r7, r2
_0807A356:
	add r0, r0, r1
	strb r6, [r0]
	b _0807A3B0
_0807A35C:
	.4byte 0x000009DA
_0807A360:
	.4byte gCrystalCount
_0807A364:
	.4byte gUnknown_0814CADC
_0807A368:
	.4byte 0x00000B6A
_0807A36C:
	.4byte 0x0000097C
_0807A370:
	.4byte gUnknown_08152AAC
_0807A374:
	.4byte 0x000009E6
_0807A378:
	ldr r3, _0807A3B8  @ =0x00001649
	add r1, r7, r3
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0807A3BC  @ =0x00000A49
	add r1, r7, r0
	mov r0, #255
	strb r0, [r1]
	ldr r2, _0807A3C0  @ =0x00000B6A
	add r1, r7, r2
	mov r2, #0
	mov r0, #128
	strh r0, [r1]
	ldr r3, _0807A3C4  @ =0x0000097C
	add r0, r7, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	add r3, r3, #106
	add r1, r7, r3
	add r0, r0, r1
	strb r2, [r0]
	ldr r0, _0807A3C8  @ =0x00000504
	add r1, r7, r0
	mov r0, #123
	bl sub_0812A324
	bl sub_080D5188
_0807A3B0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807A3B8:
	.4byte 0x00001649
_0807A3BC:
	.4byte 0x00000A49
_0807A3C0:
	.4byte 0x00000B6A
_0807A3C4:
	.4byte 0x0000097C
_0807A3C8:
	.4byte 0x00000504
	THUMB_FUNC_END sub_0807A280

