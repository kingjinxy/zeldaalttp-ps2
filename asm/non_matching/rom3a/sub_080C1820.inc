	THUMB_FUNC_START sub_080C1820
sub_080C1820: @ 0x080C1820
	push {r4,r5,lr}
	add r4, r1, #0
	ldr r5, _080C1878  @ =gRam
	ldr r1, _080C187C  @ =0x00000964
	add r3, r5, r1
	ldrh r1, [r3]
	strh r1, [r0]
	mov r2, #0
	ldrsh r0, [r3, r2]
	add r0, r0, #128
	ldr r1, _080C1880  @ =0x0000017F
	cmp r0, r1
	ble _080C183E
	mov r0, #240
	strh r0, [r4]
_080C183E:
	ldr r0, _080C1884  @ =0x00001734
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080C1888  @ =0x00001735
	add r2, r5, r1
	ldrh r1, [r3]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	asr r0, r0, #8
	strb r0, [r2]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r0, [r1]
	strh r0, [r4]
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r0, r0, #16
	cmp r0, #255
	ble _080C1872
	mov r0, #240
	strh r0, [r4]
_080C1872:
	pop {r4,r5}
	pop {r0}
	bx r0
_080C1878:
	.4byte gRam
_080C187C:
	.4byte 0x00000964
_080C1880:
	.4byte 0x0000017F
_080C1884:
	.4byte 0x00001734
_080C1888:
	.4byte 0x00001735
	THUMB_FUNC_END sub_080C1820

