	THUMB_FUNC_START sub_080CC07C
sub_080CC07C: @ 0x080CC07C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080CC0BC  @ =gRam
	ldr r1, _080CC0C0  @ =0x00000D23
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080CC0C4  @ =0x00000D2B
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r3, _080CC0C8  @ =0x00000952
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	mov r0, #255
	lsl r0, r0, #24
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _080CC0D0
	ldr r1, _080CC0CC  @ =0x00000D4B
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	b _080CC166
	.byte 0x00
	.byte 0x00
_080CC0BC:
	.4byte gRam
_080CC0C0:
	.4byte 0x00000D23
_080CC0C4:
	.4byte 0x00000D2B
_080CC0C8:
	.4byte 0x00000952
_080CC0CC:
	.4byte 0x00000D4B
_080CC0D0:
	ldr r2, _080CC138  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080CC0EE
	ldr r3, _080CC13C  @ =0x00000D4B
	add r0, r5, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080CC0EE
	sub r0, r0, #1
	strb r0, [r1]
_080CC0EE:
	add r3, r5, #0
	ldr r1, _080CC140  @ =0x000015F9
	add r0, r3, r1
	mov r1, #0
	mov r7, #2
	strb r7, [r0]
	ldr r2, _080CC144  @ =0x000015FA
	add r6, r3, r2
	strb r1, [r6]
	ldr r1, _080CC148  @ =0x00000D43
	add r0, r3, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080CC166
	mov r0, #56
	strb r0, [r2]
	ldr r2, _080CC13C  @ =0x00000D4B
	add r0, r3, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080CC150
	mov r0, #160
	strb r0, [r1]
	strb r0, [r6]
	ldr r0, _080CC14C  @ =0x0000097C
	add r1, r3, r0
	mov r0, #8
	strb r0, [r1]
	b _080CC160
_080CC138:
	.4byte 0x00000996
_080CC13C:
	.4byte 0x00000D4B
_080CC140:
	.4byte 0x000015F9
_080CC144:
	.4byte 0x000015FA
_080CC148:
	.4byte 0x00000D43
_080CC14C:
	.4byte 0x0000097C
_080CC150:
	bl GetRandomInt
	add r1, r7, #0
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r2, _080CC16C  @ =0x0000097C
	add r0, r5, r2
	strb r1, [r0]
_080CC160:
	add r0, r4, #0
	bl sub_080CC170
_080CC166:
	pop {r4-r7}
	pop {r0}
	bx r0
_080CC16C:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080CC07C

