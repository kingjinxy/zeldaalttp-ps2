	THUMB_FUNC_START sub_0802BE4C
sub_0802BE4C: @ 0x0802BE4C
	push {r4-r7,lr}
	ldr r0, _0802BEBC  @ =gUnknown_02016328
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802BEB6
	ldr r1, _0802BEC0  @ =gUnknown_0202A770
	ldrb r0, [r1, #1]
	cmp r0, #4
	beq _0802BEC4
	mov r6, #0
	ldrb r0, [r1, #6]
	cmp r6, r0
	bcs _0802BEB6
	add r7, r1, #0
	add r7, r7, #24
	add r5, r1, #0
_0802BE6C:
	lsl r0, r6, #3
	add r4, r0, r7
	ldrb r0, [r4, #5]
	cmp r0, #0
	bne _0802BEAA
	mov r0, #10
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _0802BEAA
	ldrb r1, [r5, #4]
	add r0, r0, #112
	strb r1, [r0]
	ldrb r0, [r5, #5]
	add r1, r2, #0
	add r1, r1, #113
	strb r0, [r1]
	ldrh r0, [r4]
	strh r0, [r2, #50]
	ldrh r0, [r4, #2]
	strh r0, [r2, #54]
	sub r1, r1, #5
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	add r0, r2, #0
	bl sub_08008D90
_0802BEAA:
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldrb r0, [r5, #6]
	cmp r6, r0
	bcc _0802BE6C
_0802BEB6:
	bl sub_0802BF30
	b _0802BF24
_0802BEBC:
	.4byte gUnknown_02016328
_0802BEC0:
	.4byte gUnknown_0202A770
_0802BEC4:
	ldrh r0, [r1, #8]
	sub r0, r0, #1
	strh r0, [r1, #8]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802BF24
	mov r6, #0
	ldrb r0, [r1, #6]
	cmp r6, r0
	bcs _0802BF20
	add r7, r1, #0
	add r7, r7, #24
_0802BEDC:
	lsl r0, r6, #3
	add r4, r0, r7
	ldrb r0, [r4, #5]
	cmp r0, #0
	bne _0802BF12
	add r5, r7, #0
	sub r5, r5, #24
	ldrb r0, [r5, #4]
	bl sub_08012468
	add r2, r0, #0
	cmp r2, #0
	beq _0802BF12
	ldrb r0, [r5, #5]
	strb r0, [r2, #10]
	ldrh r0, [r4]
	strh r0, [r2, #50]
	ldrh r0, [r4, #2]
	strh r0, [r2, #54]
	add r1, r2, #0
	add r1, r1, #108
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	add r0, r2, #0
	bl sub_08008D90
_0802BF12:
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _0802BF2C  @ =gUnknown_0202A770
	ldrb r0, [r0, #6]
	cmp r6, r0
	bcc _0802BEDC
_0802BF20:
	bl sub_0802BF30
_0802BF24:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802BF2C:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802BE4C

