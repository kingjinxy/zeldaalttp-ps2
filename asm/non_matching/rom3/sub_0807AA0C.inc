	THUMB_FUNC_START sub_0807AA0C
sub_0807AA0C: @ 0x0807AA0C
	push {r4-r6,lr}
	ldr r0, _0807AAA8  @ =gRam
	mov r2, #188
	lsl r2, r2, #4
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	bne _0807AA58
	mov r2, #0
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	strh r2, [r0]
	mov r6, #128
	lsl r6, r6, #8
	add r4, r0, #0
	ldr r0, _0807AAAC  @ =0x0000199C
	add r3, r5, r0
_0807AA32:
	ldrh r1, [r3]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807AA42
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_0807AA42:
	add r3, r3, #2
	add r2, r2, #1
	cmp r2, #16
	bne _0807AA32
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #3
	ble _0807AAA0
_0807AA58:
	mov r3, #172
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	mov r1, #188
	lsl r1, r1, #4
	add r0, r5, r1
	strh r2, [r0]
	sub r3, r3, #24
	add r2, r5, r3
	ldr r1, _0807AAB0  @ =gUnknown_081676B2
	ldr r3, _0807AAB4  @ =0x0000097C
	add r0, r5, r3
	mov r3, #0
	ldrsh r0, [r0, r3]
	lsl r0, r0, #1
	add r0, r0, #6
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r2]
	ldr r0, _0807AAB8  @ =0x00000A3E
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _0807AABC  @ =0x00001605
	add r0, r5, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _0807AAC0  @ =0x00001770
	add r0, r5, r2
	strb r1, [r0]
_0807AAA0:
	mov r0, #0
	pop {r4-r6}
	pop {r1}
	bx r1
_0807AAA8:
	.4byte gRam
_0807AAAC:
	.4byte 0x0000199C
_0807AAB0:
	.4byte gUnknown_081676B2
_0807AAB4:
	.4byte 0x0000097C
_0807AAB8:
	.4byte 0x00000A3E
_0807AABC:
	.4byte 0x00001605
_0807AAC0:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0807AA0C

