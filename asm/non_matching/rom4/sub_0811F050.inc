	THUMB_FUNC_START sub_0811F050
sub_0811F050: @ 0x0811F050
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _0811F0EC  @ =gRam
	ldr r1, _0811F0F0  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811F0E0
	ldr r2, _0811F0F4  @ =0x00000E1F
	add r0, r6, r2
	add r5, r4, r0
	ldrb r1, [r5]
	ldr r0, _0811F0F8  @ =0x00000996
	add r2, r6, r0
	ldr r0, _0811F0FC  @ =gUnknown_0817FAE2
	add r1, r1, r0
	ldrb r2, [r2]
	ldrb r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _0811F088
	add r0, r4, #0
	bl sub_080C1768
	add r0, r4, #0
	bl sub_080BF774
_0811F088:
	ldr r1, _0811F100  @ =0x00000E33
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0811F0A4
	mov r0, #3
	strb r0, [r2]
	ldrb r0, [r5]
	add r0, r0, #1
	cmp r0, #5
	ble _0811F0A2
	mov r0, #4
_0811F0A2:
	strb r0, [r5]
_0811F0A4:
	add r0, r4, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811F0C0
	add r0, r4, #0
	mov r1, #0
	bl sub_080C188C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811F0E0
_0811F0C0:
	ldr r1, _0811F0EC  @ =gRam
	ldr r2, _0811F104  @ =0x00000E15
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #4
	strb r2, [r0]
	ldr r2, _0811F100  @ =0x00000E33
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #7
	strb r2, [r0]
	ldr r0, _0811F108  @ =0x00000E5B
	add r1, r1, r0
	add r1, r4, r1
	mov r0, #16
	strb r0, [r1]
_0811F0E0:
	add r0, r4, #0
	bl sub_0811F10C
	pop {r4-r6}
	pop {r0}
	bx r0
_0811F0EC:
	.4byte gRam
_0811F0F0:
	.4byte 0x000009AD
_0811F0F4:
	.4byte 0x00000E1F
_0811F0F8:
	.4byte 0x00000996
_0811F0FC:
	.4byte gUnknown_0817FAE2
_0811F100:
	.4byte 0x00000E33
_0811F104:
	.4byte 0x00000E15
_0811F108:
	.4byte 0x00000E5B
	THUMB_FUNC_END sub_0811F050

