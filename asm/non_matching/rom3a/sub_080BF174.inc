	THUMB_FUNC_START sub_080BF174
sub_080BF174: @ 0x080BF174
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080BF1F4  @ =gRam
	ldr r5, _080BF1F8  @ =gUnknown_081718D4
	ldr r6, _080BF1FC  @ =0x00000E47
	add r3, r4, r6
	add r3, r0, r3
	ldrb r3, [r3]
	add r3, r3, r5
	ldrb r5, [r3]
	ldr r7, _080BF200  @ =0x00001724
	add r3, r4, r7
	mov r6, #0
	strb r5, [r3]
	ldr r5, _080BF204  @ =0x00001723
	add r3, r4, r5
	strb r6, [r3]
	ldr r6, _080BF208  @ =0x00000DC5
	add r3, r4, r6
	add r3, r0, r3
	ldrb r3, [r3]
	mov r7, #150
	lsl r7, r7, #4
	add r6, r4, r7
	strb r3, [r6]
	ldr r5, _080BF20C  @ =0x00000DD9
	add r3, r4, r5
	add r3, r0, r3
	ldrb r5, [r3]
	add r7, r7, #1
	add r3, r4, r7
	strb r5, [r3]
	ldr r5, _080BF210  @ =0x00000DCF
	add r3, r4, r5
	add r3, r0, r3
	ldrb r3, [r3]
	add r7, r7, #3
	add r5, r4, r7
	strb r3, [r5]
	ldr r7, _080BF214  @ =0x00000DE3
	add r3, r4, r7
	add r0, r0, r3
	ldrb r3, [r0]
	ldr r7, _080BF218  @ =0x00000965
	add r0, r4, r7
	strb r3, [r0]
	ldrh r0, [r6]
	lsl r2, r2, #16
	asr r2, r2, #16
	sub r0, r0, r2
	strh r0, [r6]
	ldrh r0, [r5]
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r0, r0, r1
	strh r0, [r5]
	ldr r1, _080BF21C  @ =0x00000968
	add r4, r4, r1
	strh r0, [r4]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BF1F4:
	.4byte gRam
_080BF1F8:
	.4byte gUnknown_081718D4
_080BF1FC:
	.4byte 0x00000E47
_080BF200:
	.4byte 0x00001724
_080BF204:
	.4byte 0x00001723
_080BF208:
	.4byte 0x00000DC5
_080BF20C:
	.4byte 0x00000DD9
_080BF210:
	.4byte 0x00000DCF
_080BF214:
	.4byte 0x00000DE3
_080BF218:
	.4byte 0x00000965
_080BF21C:
	.4byte 0x00000968
	THUMB_FUNC_END sub_080BF174

