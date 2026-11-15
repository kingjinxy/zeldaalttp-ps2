	THUMB_FUNC_START sub_080BE078
sub_080BE078: @ 0x080BE078
	push {r4,r5,lr}
	ldr r5, _080BE18C  @ =gRam
	ldr r1, _080BE190  @ =0x000009DA
	add r0, r5, r1
	ldrh r3, [r0]
	cmp r3, #0
	beq _080BE088
	b _080BE204
_080BE088:
	ldr r2, _080BE194  @ =0x000009C6
	add r0, r5, r2
	ldrh r2, [r0]
	cmp r2, #91
	beq _080BE094
	b _080BE204
_080BE094:
	ldr r0, _080BE198  @ =0x00001674
	add r1, r5, r0
	mov r4, #0
	ldr r0, _080BE19C  @ =0x000007F3
	strh r0, [r1]
	ldr r0, _080BE1A0  @ =0x00001676
	add r1, r5, r0
	ldr r0, _080BE1A4  @ =0x0000065B
	strh r0, [r1]
	ldr r1, _080BE1A8  @ =0x0000166E
	add r0, r5, r1
	strb r4, [r0]
	ldr r0, _080BE1AC  @ =0x00001670
	add r1, r5, r0
	mov r0, #32
	strh r0, [r1]
	ldr r1, _080BE1B0  @ =0x00001682
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _080BE1B4  @ =0x00001684
	add r0, r5, r2
	mov r2, #192
	lsl r2, r2, #3
	strh r2, [r0]
	ldr r0, _080BE1B8  @ =0x00001686
	add r1, r5, r0
	mov r0, #150
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r1, _080BE1BC  @ =0x00001688
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _080BE1C0  @ =0x0000168A
	add r1, r5, r2
	mov r0, #145
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r0, _080BE1C4  @ =0x0000168C
	add r1, r5, r0
	mov r0, #172
	lsl r0, r0, #3
	strh r0, [r1]
	ldr r1, _080BE1C8  @ =0x0000168E
	add r0, r5, r1
	mov r2, #160
	lsl r2, r2, #4
	strh r2, [r0]
	ldr r0, _080BE1CC  @ =0x00001690
	add r1, r5, r0
	mov r0, #162
	lsl r0, r0, #3
	strh r0, [r1]
	ldr r1, _080BE1D0  @ =0x00001692
	add r0, r5, r1
	strh r2, [r0]
	ldr r2, _080BE1D4  @ =0x00001694
	add r1, r5, r2
	mov r0, #240
	lsl r0, r0, #3
	strh r0, [r1]
	ldr r0, _080BE1D8  @ =0x00001696
	add r1, r5, r0
	ldr r0, _080BE1DC  @ =0x0000061C
	strh r0, [r1]
	add r2, r2, #4
	add r1, r5, r2
	add r0, r0, #74
	strh r0, [r1]
	ldr r0, _080BE1E0  @ =0x0000169A
	add r1, r5, r0
	ldr r0, _080BE1E4  @ =0x000007FA
	strh r0, [r1]
	ldr r1, _080BE1E8  @ =0x0000169C
	add r0, r5, r1
	strh r3, [r0]
	add r2, r2, #6
	add r1, r5, r2
	ldr r0, _080BE1EC  @ =0x0000FFFA
	strh r0, [r1]
	mov r1, #181
	lsl r1, r1, #5
	add r0, r5, r1
	strh r3, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r3, [r0]
	add r1, r1, #4
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #3
	add r1, r5, r2
	mov r0, #33
	strb r0, [r1]
	ldr r0, _080BE1F0  @ =0x000016A6
	add r1, r5, r0
	mov r0, #59
	strb r0, [r1]
	add r2, r2, #2
	add r1, r5, r2
	mov r0, #38
	strb r0, [r1]
	ldr r0, _080BE1F4  @ =0x000016A8
	add r1, r5, r0
	mov r0, #192
	lsl r0, r0, #4
	strh r0, [r1]
	bl sub_0812A0B8
	ldr r2, _080BE1F8  @ =0x000016AE
	add r1, r5, r2
	strh r0, [r1]
	bl sub_0812A130
	ldr r2, _080BE1FC  @ =0x000016B2
	add r1, r5, r2
	strb r0, [r1]
	ldr r1, _080BE200  @ =0x000016B0
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #6
	add r1, r5, r2
	mov r0, #1
	strh r0, [r1]
	b _080BE212
_080BE18C:
	.4byte gRam
_080BE190:
	.4byte 0x000009DA
_080BE194:
	.4byte 0x000009C6
_080BE198:
	.4byte 0x00001674
_080BE19C:
	.4byte 0x000007F3
_080BE1A0:
	.4byte 0x00001676
_080BE1A4:
	.4byte 0x0000065B
_080BE1A8:
	.4byte 0x0000166E
_080BE1AC:
	.4byte 0x00001670
_080BE1B0:
	.4byte 0x00001682
_080BE1B4:
	.4byte 0x00001684
_080BE1B8:
	.4byte 0x00001686
_080BE1BC:
	.4byte 0x00001688
_080BE1C0:
	.4byte 0x0000168A
_080BE1C4:
	.4byte 0x0000168C
_080BE1C8:
	.4byte 0x0000168E
_080BE1CC:
	.4byte 0x00001690
_080BE1D0:
	.4byte 0x00001692
_080BE1D4:
	.4byte 0x00001694
_080BE1D8:
	.4byte 0x00001696
_080BE1DC:
	.4byte 0x0000061C
_080BE1E0:
	.4byte 0x0000169A
_080BE1E4:
	.4byte 0x000007FA
_080BE1E8:
	.4byte 0x0000169C
_080BE1EC:
	.4byte 0x0000FFFA
_080BE1F0:
	.4byte 0x000016A6
_080BE1F4:
	.4byte 0x000016A8
_080BE1F8:
	.4byte 0x000016AE
_080BE1FC:
	.4byte 0x000016B2
_080BE200:
	.4byte 0x000016B0
_080BE204:
	bl sub_080BDE8C
	ldr r0, _080BE218  @ =gRam
	ldr r1, _080BE21C  @ =0x000016AC
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
_080BE212:
	pop {r4,r5}
	pop {r0}
	bx r0
_080BE218:
	.4byte gRam
_080BE21C:
	.4byte 0x000016AC
	THUMB_FUNC_END sub_080BE078

