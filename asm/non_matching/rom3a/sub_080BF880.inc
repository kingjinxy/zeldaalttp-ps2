	THUMB_FUNC_START sub_080BF880
sub_080BF880: @ 0x080BF880
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r7, r1, #24
	ldr r3, _080BF920  @ =gRam
	ldr r2, _080BF924  @ =0x00000DC5
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r6, r3, r4
	strb r1, [r6]
	add r2, r2, #20
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r4, r4, #1
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080BF928  @ =0x00000DCF
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	add r4, r4, #3
	add r5, r3, r4
	strb r1, [r5]
	add r2, r2, #20
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	add r4, r4, #1
	add r1, r3, r4
	strb r2, [r1]
	ldr r2, _080BF92C  @ =0x00000A92
	add r1, r3, r2
	add r0, r0, r1
	ldrb r4, [r0]
	ldr r1, _080BF930  @ =0x00000974
	add r0, r3, r1
	strh r4, [r0]
	ldr r0, _080BF934  @ =gUnknown_0817199C
	lsl r2, r7, #1
	add r0, r2, r0
	ldrh r1, [r0]
	add r1, r1, r4
	ldrh r4, [r6]
	add r1, r1, r4
	strh r1, [r6]
	ldr r0, _080BF938  @ =gUnknown_081719A6
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r4, [r5]
	add r0, r0, r4
	strh r0, [r5]
	mov r0, #182
	lsl r0, r0, #5
	add r4, r3, r0
	ldr r0, _080BF93C  @ =gUnknown_081719C4
	add r2, r2, r0
	ldrh r0, [r2]
	ldrh r4, [r4]
	add r0, r0, r4
	sub r1, r0, r1
	ldr r4, _080BF940  @ =0x00000968
	add r2, r3, r4
	strh r1, [r2]
	lsl r0, r1, #16
	cmp r0, #0
	bge _080BF944
	mov r1, #0
	ldrsh r0, [r2, r1]
	neg r0, r0
	mov r2, #151
	lsl r2, r2, #4
	add r1, r3, r2
	strh r0, [r1]
	b _080BF94C
	.byte 0x00
	.byte 0x00
_080BF920:
	.4byte gRam
_080BF924:
	.4byte 0x00000DC5
_080BF928:
	.4byte 0x00000DCF
_080BF92C:
	.4byte 0x00000A92
_080BF930:
	.4byte 0x00000974
_080BF934:
	.4byte gUnknown_0817199C
_080BF938:
	.4byte gUnknown_081719A6
_080BF93C:
	.4byte gUnknown_081719C4
_080BF940:
	.4byte 0x00000968
_080BF944:
	mov r4, #151
	lsl r4, r4, #4
	add r0, r3, r4
	strh r1, [r0]
_080BF94C:
	mov r1, #151
	lsl r1, r1, #4
	add r0, r3, r1
	mov r4, #0
	ldrsh r2, [r0, r4]
	ldr r0, _080BF994  @ =gUnknown_081719B0
	lsl r1, r7, #1
	add r0, r1, r0
	add r4, r1, #0
	ldrh r0, [r0]
	cmp r2, r0
	bge _080BF9D0
	ldr r0, _080BF998  @ =0x000016C4
	add r1, r3, r0
	ldr r0, _080BF99C  @ =gUnknown_081719CE
	add r0, r4, r0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _080BF9A0  @ =0x00000964
	add r1, r3, r2
	ldrh r1, [r1]
	sub r1, r0, r1
	ldr r0, _080BF9A4  @ =0x0000096C
	add r2, r3, r0
	strh r1, [r2]
	lsl r0, r1, #16
	cmp r0, #0
	bge _080BF9AC
	mov r1, #0
	ldrsh r0, [r2, r1]
	neg r0, r0
	ldr r2, _080BF9A8  @ =0x00000974
	add r1, r3, r2
	strh r0, [r1]
	b _080BF9B2
_080BF994:
	.4byte gUnknown_081719B0
_080BF998:
	.4byte 0x000016C4
_080BF99C:
	.4byte gUnknown_081719CE
_080BF9A0:
	.4byte 0x00000964
_080BF9A4:
	.4byte 0x0000096C
_080BF9A8:
	.4byte 0x00000974
_080BF9AC:
	ldr r2, _080BF9C8  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
_080BF9B2:
	ldr r1, _080BF9C8  @ =0x00000974
	add r0, r3, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r0, _080BF9CC  @ =gUnknown_081719BA
	add r0, r4, r0
	ldrh r0, [r0]
	cmp r1, r0
	bge _080BF9D0
	mov r0, #1
	b _080BF9D2
_080BF9C8:
	.4byte 0x00000974
_080BF9CC:
	.4byte gUnknown_081719BA
_080BF9D0:
	mov r0, #0
_080BF9D2:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BF880

