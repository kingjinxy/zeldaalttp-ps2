	THUMB_FUNC_START sub_080AB15C
sub_080AB15C: @ 0x080AB15C
	push {r4-r6,lr}
	ldr r4, _080AB180  @ =gRam
	ldr r1, _080AB184  @ =0x00000AA8
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	beq _080AB18C
	ldr r2, _080AB188  @ =0x000009E5
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	b _080AB214
_080AB180:
	.4byte gRam
_080AB184:
	.4byte 0x00000AA8
_080AB188:
	.4byte 0x000009E5
_080AB18C:
	ldr r1, _080AB1E8  @ =0x0000179A
	add r6, r4, r1
	strh r0, [r6]
	add r1, r1, #2
	add r5, r4, r1
	strh r0, [r5]
	mov r1, #172
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r3, [r0]
	mov r0, #1
	and r0, r0, r3
	cmp r0, #0
	bne _080AB214
	ldr r0, _080AB1EC  @ =0x00000AC2
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	lsr r1, r0, #16
	mov r0, #1
	and r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	strh r1, [r2]
	mov r0, #2
	and r0, r0, r3
	cmp r0, #0
	bne _080AB1CE
	mvn r0, r1
	add r0, r0, #1
	strh r0, [r2]
_080AB1CE:
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _080AB1F8
	ldrh r2, [r2]
	strh r2, [r5]
	ldr r0, _080AB1F0  @ =0x00000AC8
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, r2
	strh r0, [r1]
	ldr r2, _080AB1F4  @ =0x00000952
	b _080AB208
_080AB1E8:
	.4byte 0x0000179A
_080AB1EC:
	.4byte 0x00000AC2
_080AB1F0:
	.4byte 0x00000AC8
_080AB1F4:
	.4byte 0x00000952
_080AB1F8:
	ldrh r2, [r2]
	strh r2, [r6]
	ldr r0, _080AB21C  @ =0x00000ACA
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, r2
	strh r0, [r1]
	ldr r2, _080AB220  @ =0x00000958
_080AB208:
	add r1, r4, r2
	ldrh r1, [r1]
	add r0, r0, r1
	sub r2, r2, #2
	add r1, r4, r2
	strh r0, [r1]
_080AB214:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AB21C:
	.4byte 0x00000ACA
_080AB220:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080AB15C

